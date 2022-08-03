import json

intents0 = """  {"intents": [
        {"tag": "greeting",
         "patterns": ["Hi there", "How are you", "Is anyone there?", "Hello", "Good day"],
         "responses": ["Hello, thanks for asking", "Good to see you again", "Hi there, how can I help?"],
         "context": [""]
        },
        {"tag": "goodbye",
         "patterns": ["Bye", "See you later", "Goodbye", "Nice chatting to you, bye", "Till next time"],
         "responses": ["See you!", "Have a nice day", "Bye! Come back again soon."],
         "context": [""]
        },
        {"tag": "thanks",
         "patterns": ["Thanks", "Thank you", "That's helpful", "Awesome, thanks", "Thanks for helping me"],
         "responses": ["Happy to help!", "Any time!", "My pleasure"]
        },
        {"tag": "noanswer",
         "patterns": [],
         "responses": ["Sorry, can't understand you", "Please give me more info", "Not sure I understand"]
        },
        {"tag": "options",
         "patterns": ["How you could help me?", "What you can do?", "What help you provide?", "How you can be helpful?", "What support is offered"],
         "responses": ["I can guide you through Adverse drug reaction list, Blood pressure tracking and Pharmacies", "Offering support for Adverse drug reaction, Blood pressure and Pharmacies"]
        },
        {"tag": "adverse_drug",
         "patterns": ["How to check Adverse drug reaction?", "Open adverse drugs module", "Give me a list of drugs causing adverse behavior", "List all drugs suitable for patient with adverse reaction", "Which drugs dont have adverse reaction?" ],
         "responses": ["Navigating to Adverse drug reaction module"],
         "context": ["adverse_drug_module"]
        },
        {"tag": "blood_pressure",
         "patterns": ["Open blood pressure module", "Task related to blood pressure", "Blood pressure data entry", "I want to log blood pressure results", "Blood pressure data management" ],
         "responses": ["Navigating to Blood Pressure module"],
         "context": ["blood_pressure_module"]
        },
        {"tag": "blood_pressure_search",
         "patterns": ["I want to search for blood pressure result history", "Blood pressure for patient", "Load patient blood pressure result", "Show blood pressure results for patient", "Find blood pressure results by ID" ],
         "responses": ["Please provide Patient ID", "Patient ID?"],
         "context": ["search_blood_pressure_by_patient_id"]
        },
        {"tag": "blood_pressure_search_answer",
         "patterns": [],
         "responses": ["Searching Blood pressure history for Patient"],
         "context": ["search_blood_pressure_by_patient_id"]
        },
        {"tag": "pharmacy_search",
         "patterns": ["Find me a pharmacy", "Find pharmacy", "List of pharmacies nearby", "Locate pharmacy", "Search pharmacy" ],
         "responses": ["Please provide pharmacy name"],
         "context": ["search_pharmacy_by_name"]
        },
        {"tag": "pharmacy_search_answer",
         "patterns": [],
         "responses": ["Searching Pharmacy"],
         "context": ["search_pharmacy_by_name"]
        },
        {"tag": "hospital_search",
         "patterns": ["Lookup for hospital", "Searching for hospital to transfer patient", "I want to search hospital data", "Hospital lookup for patient", "Looking up hospital details" ],
         "responses": ["Please provide hospital name, type or location"],
         "context": ["search_hospital_by_name"]
        },
        {"tag": "hospital_search_answer",
         "patterns": [],
         "responses": ["Searching Hospital"],
         "context": ["search_hospital_by_name"]
        }
   ]  
} """ 

# JSON 스트링을 파이썬 dict 으로 디코딩 번역

chat_data = json.loads( intents0 )
#################################
#################################



import nltk

# stemmer 는 다음을 import 해야한다 
nltk.download('punkt')

# lemmatizer 는 다음을 추가로 import 한다
nltk.download('omw-1.4')
nltk.download("wordnet")



from nltk.stem.lancaster import LancasterStemmer
stemmer = LancasterStemmer()

from nltk.stem import WordNetLemmatizer
lemmatizer = WordNetLemmatizer()

chat_words = []
wordss = []  # stemmer
wordsl = []   # lemmatizer

classes = []
documents = []
ignore_words = ['?','!']


# loop through each sentence in our intents patterns
for intent in chat_data['intents']:
    for pattern in intent['patterns']:
        # tokenize each word in the sentence
        w = nltk.word_tokenize(pattern)
        # add to our words list
        chat_words.extend(w)
        # add to documents in our corpus
        documents.append((w, intent['tag']))
        # add to our classes list
        if intent['tag'] not in classes:
            classes.append(intent['tag'])



# stem and lower each word and remove duplicates
wordss = [stemmer.stem(w.lower()) for w in chat_words if w not in ignore_words]
#words = [lemmatizer.lemmatize(w.lower()) for w in words if w not in ignore_words]
wordss = sorted(list(set(wordss)))

# remove duplicates
classes = sorted(list(set(classes)))

print (len(documents), "documents")
print (len(classes), "classes", classes)
print()
print (len(wordss), "unique stemmed words", wordss)

print()

wordsl = [lemmatizer.lemmatize(w.lower()) for w in chat_words if w not in ignore_words]
wordsl = sorted(list(set(wordsl)))

print(len(wordsl), "unique lemmatized words", wordsl)

print()

######################################################

chat_words = wordsl   #  lemmatizer  것으로 잡는다 !!

######################################################

import random
import numpy as np

import pickle
import json
import nltk

# training initializer
# initializing training data
training = []
output_empty = [0] * len(classes)

for doc in documents:
    # initializing bag of words
    bag = []
    # list of tokenized words for the pattern
    pattern_words = doc[0]
    # lemmatize each word - create base word, in attempt to represent related words
    pattern_words = [lemmatizer.lemmatize( word.lower() ) for word in pattern_words]
    # create our bag of words array with 1, if word match found in current pattern
    for w in chat_words:
        bag.append(1) if w in pattern_words else bag.append(0)

    # output is a '0' for each tag and '1' for current tag (for each pattern)
    output_row = list(output_empty)
    output_row[classes.index(doc[1])] = 1

    training.append([bag, output_row])


# shuffle our features and turn into np.array
random.shuffle(training)
training = np.array(training)

# create train and test lists. X - patterns, Y - intents
train_x = list(training[:, 0])
train_y = list(training[:, 1])

print("Training data created")

print( len(train_x) )
print(  train_y[0]  )


import tensorflow as tf

from tensorflow.keras.optimizers import SGD
from tensorflow.keras.layers import Dense, Dropout
from tensorflow.keras.models import load_model
from tensorflow.keras.models import Sequential


#################################################

# Create model - 3 layers. First layer 128 neurons, second layer 64 neurons and 3rd output layer contains number of neurons
# equal to number of intents to predict output intent with softmax

model = Sequential()
model.add(Dense(128, input_shape=(len(train_x[0]),), activation="relu"))
model.add(Dropout(0.5))
model.add(Dense(64, activation="relu"))
model.add(Dropout(0.5))
model.add(Dense(len(train_y[0]), activation="softmax"))
model.summary()

# Compile model. Stochastic gradient descent with Nesterov accelerated gradient gives good results for this model
sgd = SGD(lr=0.01, decay=1e-6, momentum=0.9, nesterov=True)
model.compile(loss="categorical_crossentropy", optimizer=sgd, metrics=["accuracy"])

# for choosing an optimal number of training epochs to avoid underfitting or overfitting use an early stopping callback to keras
# based on either accuracy or loos monitoring. If the loss is being monitored, training comes to halt when there is an 
# increment observed in loss values. Or, If accuracy is being monitored, training comes to halt when there is decrement observed in accuracy values.

# from keras import callbacks 
# earlystopping = callbacks.EarlyStopping(monitor ="loss", mode ="min", patience = 5, restore_best_weights = True)
# callbacks =[earlystopping]

# fitting and saving the model
hist = model.fit(np.array(train_x), np.array(train_y), epochs=200, batch_size=5, verbose=1)

model.save("chatbot_model.h5")  # , hist)
print("model created and 저장되었습니다 !!")


# Calling `save('my_model.h5')` creates a h5 file `my_model.h5`.
# model.save("chatbot_model.h5")

# It can be used to reconstruct the model identically.
chat_model = tf.keras.models.load_model("chatbot_model.h5")


from nltk.stem.lancaster import LancasterStemmer
stemmer = LancasterStemmer()

#  >>> import nltk
#  >>> nltk.download('punkt') 없으면 에러난다 !!

from nltk.stem import WordNetLemmatizer
lemmatizer = WordNetLemmatizer()


ignore_words = ['?','!']


def clean_up_sentence(sentence):
    # tokenize the pattern
    sentence_words = nltk.word_tokenize(sentence)
    # stem each word
    
    sentence_words = [lemmatizer.lemmatize(w.lower()) for w in sentence_words if w not in ignore_words ]
    # sentence_words = [stemmer.stem(word.lower()) for word in sentence_words if w not in ignore_words ]
    # stemmer.stem(  ) 
    return sentence_words

# return bag of words array: 0 or 1 for each word in the bag that exists in the sentence
def bow( sentence, words, show_details=False):
    # tokenize the pattern
    sentence_words = clean_up_sentence(sentence)
    # bag of words
    bag = [0]*len( words )  

    for s in sentence_words:
        for i,w in enumerate( words ):
            if w == s: 
                bag[i] = 1
                if show_details:
                    print ("found in bag: %s" % w)

    return(np.array(bag))

print( len( chat_words) )
p = bow("I'm looking for pharmacy", chat_words)
print (p)
print (classes)

np.array( [  p ]  )

def predict_class(sentence, model):
    # filter out predictions below a threshold
    p = bow(sentence, chat_words, show_details=False)
    res = model.predict(np.array([p]))[0]
    ERROR_THRESHOLD = 0.25
    results = [[i, r] for i, r in enumerate(res) if r > ERROR_THRESHOLD]
    # sort by strength of probability
    results.sort(key=lambda x: x[1], reverse=True)
    return_list = []
    for r in results:
        return_list.append({"intent": classes[r[0]], "probability": str(r[1])})
    return return_list
    
    
    
predict_class( "looking for pharmacy", chat_model )


import random

def predict_class(sentence, model):
    # filter out predictions below a threshold
    p = bow(sentence, chat_words, show_details=False)
    res = model.predict(np.array([p]))[0]
    ERROR_THRESHOLD = 0.25
    results = [[i, r] for i, r in enumerate(res) if r > ERROR_THRESHOLD]
    # sort by strength of probability
    results.sort(key=lambda x: x[1], reverse=True)
    return_list = []
    for r in results:
        return_list.append({"intent": classes[r[0]], "probability": str(r[1])})
    return return_list


def getResponse(ints, intents_json):
    tag = ints[0]["intent"]
    list_of_intents = intents_json["intents"]
    for i in list_of_intents:
        if i["tag"] == tag:
            result = random.choice(i["responses"])
            break
    return result


msg = "i want a new phone"
ints = predict_class(msg, chat_model)
####################################
res = getResponse(ints, chat_data)
####################################

print( res )

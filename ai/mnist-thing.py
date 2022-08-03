#import necessary libraries
import tensorflow as tf

#load training data and split into train and test sets
mnist = tf.keras.datasets.mnist
 
(x_train,y_train), (x_test,y_test) = mnist.load_data()
x_train, x_test = x_train / 255.0, x_test / 255.0

print(  x_train.shape  )

print(  x_train[0].shape )

print( "28 곱하기 28 = 784")  

model = tf.keras.models.Sequential()
model.add(tf.keras.layers.Dense(units=784, activation="sigmoid", input_shape=(784,)))
model.add(tf.keras.layers.Dense(units=128, activation="relu"))
model.add(tf.keras.layers.Dense(units=10,  activation="softmax"))

model.summary()

x_train = x_train.reshape(x_train.shape[0], 784)
x_test = x_test.reshape(x_test.shape[0], 784)

model.compile(optimizer="adam", loss="sparse_categorical_crossentropy", metrics=["accuracy"])

history = model.fit(x_train, y_train, epochs=10, batch_size=128)

model.evaluate(x_test,y_test,verbose=2)

X = x_test[0].reshape(1,784)
Y = model.predict( X  )
print( Y )

import random
from statistics import mode
results = []
a= random.randint(1,6)
b = random.randint(1,6)

results.append(a+b)
print(mode(results))



import random

a = int(input("give me number :"))
b = int(input("give me your chooses number :"))

if a == "1":
    random_number = random.randint(1, b)
    print("Random Number:", random_number)

else:
    random_number = random.randint(1, 1000)
    print("Random Number:", random_number)

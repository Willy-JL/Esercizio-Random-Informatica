import random

amount = 100
max = 20

if __name__ == "__main__": 
    array = []
    somma = 0
    for i in range(amount):
        rand = random.randint(0, max)
        print(f"Random: {rand}")
        array.append(rand)
        somma += rand
    print()
    print()
    print(f"La somma dei valori generati è: {somma}")
    print(f"La media dei valori generati è: {somma / amount}")
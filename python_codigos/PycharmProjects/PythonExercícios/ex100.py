from random import randint

def sorteia():
    for i in range(0, 5):
        n = randint(0,10)
        print(n, end=" ")
        numeros.append(n)

def somaPar(lista):
    sum = 0
    for item in lista:
        if item % 2 == 0:
            sum += item
    print(f"\nSoma {sum}")





numeros = []
sorteia()
somaPar(numeros)
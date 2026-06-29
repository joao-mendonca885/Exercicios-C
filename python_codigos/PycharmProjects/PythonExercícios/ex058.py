import random as r
numerocomputador = r.randint(0,10)
seunumero = int(input('Digite um número de 0 a 10: '))
contador = 1
while numerocomputador != seunumero:
    seunumero = int(input('Você errou o número, tente novamente:'))
    contador = contador + 1
    if numerocomputador == seunumero:
        print(f'Parabéns, você acertou!')
        print(f'o total de tentativas: {contador}')


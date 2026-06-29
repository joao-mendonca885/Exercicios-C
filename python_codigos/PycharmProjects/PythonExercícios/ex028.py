#Escreva um programa que faça o computador 'Pensar' entre um número inteiro entre 0 e 5
# e peça para o usuário tentar descobrir qual foi o número escolhido pelo computador
import random as r

lista = ['0', '1', '2', '3', '4', '5',]
numero_computador = r.choice(lista)  # Sorteia UMA vez e guarda

escolha = input('Qual você acha que foi o valor que o computador escolheu entre 0 a 5? ')

if escolha == numero_computador:
    print('Parabéns, você acertou!')
else:
    print('Que pena, você errou!')
    print(f'O número escolhido foi {numero_computador}')
# DESAFIO 19: Um professor quer sortear um dos seus alunos para apagar o quadro. Faça um programa que ajude ele, lendo o nome deles
#e escrevendo o nome do escolhido
import random
a = str(input('digite o nome do Primeiro aluno: '))
b = str(input('digite o nome do segundo aluno: '))
c = str(input('digite o nome do terceiro aluno: '))
d = str(input('digite o nome do quarto aluno: '))
lista = [a,b,c,d]
escolhido = random.choice(lista)
print (f'o aluno escolhido foi {escolhido}')

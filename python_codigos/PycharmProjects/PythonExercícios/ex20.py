# DESAFIO 19: um professor quer sortear a ordem de apresentação do trabalho dos alunos. Faça um programa que leia o nome
# dos quatro alunos e mostre a ordem sorteada.
import random as r
a = str(input('digite o nome do Primeiro aluno: '))
b = str(input('digite o nome do segundo aluno: '))
c = str(input('digite o nome do terceiro aluno: '))
d = str(input('digite o nome do quarto aluno: '))
lista = [a,b,c,d]
r.shuffle(lista)
print(f'A ordem de apresentação de trabalho dos alunos será')
print(lista)
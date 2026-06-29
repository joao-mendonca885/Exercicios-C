#Desafio 18: Crie um programa que leia um ângulo qualquer e mostre na tela o valor do seno, cosseno e tangente desse ângulo
import math
a = float(input('Digite o valor do ângulo: '))
pi = math.pi
x = (a*pi) / 180
sen = math.sin(x)
cos = math.cos(x)
tan = math.tan(x)
print(f"O valor do seno de {a} vale {sen} graus")
print(f"O valor do cosseno de {a} vale {cos} graus")
print(f"O valor da tangente de {a} vale {tan} graus")
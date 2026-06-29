# DESAFIO 17: Crie um programa que descubra a hipotenusa de um triângulo retângulo a partir dos catetos
co = float(input('digite o valor do cateto oposto: '))
ca = float(input('Digite o valor do cateto adjacente: '))
h = (co ** 2 + ca ** 2) ** (1/2)
print(f'O valor do da hipotenusa desse triângulo de cateto oposto {co} e cateto adjascente {ca} é igual a {h}')

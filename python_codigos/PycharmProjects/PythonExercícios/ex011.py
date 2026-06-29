#DESAFIO 11: Faça um programa que leia a altura e largura de uma parede em metros, calcule a sua área
# e a quantidade de tinta necessária para pintá-la, sabendo que cada litro de tinta, pinta uma área de 2m**2
al = float(input('Digite o valor da altura: '))
l = float(input('Digite o valor da largura: '))
area = al*l
lt = 2
print(f'A medida dá área da parede equivale a {area} metros quadrados e precisaria de {area/lt} litros de tinta para pintar completamente a parede. ')
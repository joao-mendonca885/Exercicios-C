#DESAFIO 8: Escreva um valor que leia o programa em metros e o exiba convertido em centímetros e milímetros
n1 = float(input('digite um número em metros: '))
print(f'Seu valor em centímetros equivale a {n1 * (10**2):.0f}')
print(f'Seu valor em milímetros equivale a {n1 * (10**3):.0f}')

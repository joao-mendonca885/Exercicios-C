#DESAFIO 10: Crie um programa que leia quanto dinheiro uma pessoa tem na carteira e mostre quantos Dólares ela pode comprar.
rc = float(input('digite o valor em reais da sua conta bancária: '))
dolar = float(3.27)
dp = rc/dolar
print(f'você tem {rc} reais  na carteira e, com esse valor, poderá comprar {dp:.1f} dólares')
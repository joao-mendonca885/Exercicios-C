n1 = int(input('Digite um número inteiro qualquer: '))
n2 = int(input('Digite um número inteiro qualquer: '))
if n1 > n2:
    print(f'O primeiro valor é maior que o segundo')
elif n1 < n2:
    print('O segundo valor é maior que o primeiro')
else:
    print('Não existe valor maior, os dois são iguais')
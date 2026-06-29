ni = int(input('Digite um número inteiro qualquer: '))
print('Escolha qual será a base de conversão:')

bc = int(input('digite 1 para binário, digite 2 para octal, e digite 3 para hexadecimal: '))
if bc == 1:
    print(f'Aqui está o número {ni} em sua representação binária {bin(ni)[2:]}')
elif bc == 2:
    print(f'Aqui está o número {ni} em sua representação octal {oct(ni)[2:]}')
elif bc == 3:
    print(f'Aqui está o número {ni} em sua representação hexadecimal {hex(ni)[2:]}')
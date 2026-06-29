n1 = float(input('Digite um valor: '))
n2 = float(input('Digite outro valor: '))
n = 0
while n != 5:
    print('[1] somar')
    print('[2] multiplicar')
    print('[3] maior')
    print('[4] novos números')
    print('[5] sair do programa')
    n = int(input('Digite a sua opção: '))
    if n == 4:
       n1 = float(input('Digite o um novo valor: '))
       n2 = float(input('Digite outro novo valor: '))
    if n == 1:
        print(f'{n1} + {n2} = {n1 + n2}')
    elif n == 2:
        print(f'{n1} x {n2} = {n1 * n2}')
    elif n == 3:
        if n1 > n2:
            print(f'{n1} é maior que {n2}')
        if n1 == n2:
            print(f'não existe maior número, eles são iguais')
        else:
            print(f'{n2} é maior que {n1}')
    elif n == 5:
        print('fim do programa')


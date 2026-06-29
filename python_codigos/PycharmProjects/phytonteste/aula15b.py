contador = 0
n = 9
while n != 0 and n != 5:
    n = int(input('Digite um número: '))
    contador = contador + 1
    print('Digite 5 para parar ') if contador == 1 else print('', end='')
    if n == 5 or n == 0:
        break





n = s = cont = 0
while True:
    print('Digite 999 caso queira parar o programa')
    n = int(input('Digite um número inteiro:'))

    if n == 999:
        break
    cont = cont + 1
    s = s + n
print(f'Você digitou {cont} números, no qual a soma foi {s}')
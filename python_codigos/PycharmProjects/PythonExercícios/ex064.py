n = 0
contador = 0
contador2 = 0
while n != 999:
    n = int(input('Digite um número [999 para parar]: '))
    contador = contador + n
    contador2 = contador2 + 1
print(f'Ao todo você digitou {contador2 - 1} números e a soma entre eles foi {contador - 999}')
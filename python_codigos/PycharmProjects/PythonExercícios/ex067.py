n = 1
contador = 0
tabuada = 0
while True:
    n = int(input('Digite um número inteiro para o cálculo da tabuada: '))
    if n < 0:
        break
    contador = 0
    while contador < 10:
        contador = contador + 1
        tabuada = n * contador
        print(f'{n} x {contador} = {tabuada}')
print('Jogo encerrado, volte mais tarde')



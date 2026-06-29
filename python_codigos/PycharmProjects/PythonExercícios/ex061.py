pt = int(input("Digite o primeiro termo: "))
r = int(input("Digite a razao: "))
contador = 0
x = 0
while contador < 10:
    x = pt + r * contador
    contador = contador + 1
    print(x, end='-> ')
print('FIM')
mt = int(input('Você quer que mostre mais quantos termos?'))
contador2 = 10
x2 = 0
while mt > 0:
    while mt >0:
       x2 = pt + r * contador2
       contador2 = contador2 + 1
       mt = mt - 1
       print(x2, end='-> ')
    print('Fim')
    mt = int(input('Você quer que mostre mais quantos termos?'))
    if mt == 0:
        print(f'Progressão finalizada com {contador2} termos.')





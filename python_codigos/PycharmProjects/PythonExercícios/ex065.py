n = 0
p = 'S'
contador = 0
soma = 0
maior = 0
menor = 0
while p == 'S':
    contador = contador + 1
    n = int(input('Digite um número inteiro: '))
    p = str(input('Quer continuar? [S/N] ')).strip().upper()
    soma = soma + n
    if contador == 1:
        maior = n
        menor = n
    else:
        if n > maior:
            maior = n
        if n < menor:
            menor = n
print(f'Você digitou {contador} números e a média entre eles foi {soma/contador if contador >= 1 else 0}')
print(f'O maior valor foi {maior} e o menor valor foi {menor}')



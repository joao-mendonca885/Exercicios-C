maior = 0
menor = 0
for c in range(1,6):
    peso = float(input('digite seu peso em quilograma: '))
    if c == 1:
        maior = peso
        menor = peso
    else:
        if peso > maior:
            maior = peso
        if peso < menor:
            menor = peso
print(f'O maior peso lido foi de {maior}\nO menor peso lido foi de {menor}')

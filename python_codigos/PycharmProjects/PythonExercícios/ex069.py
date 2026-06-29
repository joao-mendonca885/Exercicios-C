cd = 0
ch = 0
cmv = 0
contador = 1
while True:
    print('-' * 20)
    print(f'{contador} Pessoa')
    print('-' * 20)
    idade = int(input('Qual a sua idade?'))
    sexo = str(input('Qual o seu sexo? [M/F] ')).strip().upper()
    c = str(input('Quer continuar? [S/N] ')).strip().upper()
    if sexo == 'M':
        ch = ch + 1
    if sexo == 'F' and idade < 20:
        cmv = cmv + 1
    if idade > 18:
        cd = cd + 1
    if c == 'N':
        break
    if c == 'S':
        contador = contador + 1
print(f'Existem {cd} pessoas com mais de 18 anos') if cd != 1 else print(f'Existe {cd} pessoa com mais de 18 anos')
print(f'Existem {ch} homens') if ch != 1 else print(f'Existe {ch} homem')
print(f'Existem {cmv} mulheres com menos de 20 anos') if cmv != 1 else print(f'Existe {cmv} mulher com menos de 20 anos')





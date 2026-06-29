frase = str(input('Digite uma frase:'))
fse = frase.replace(' ', '')
print(f'O inverso de {fse} é {fse[::-1]}')
if fse == fse[::-1]:
    print('Essa frase é um palindromo')
else:
    print('Essa frase não é um palindromo')
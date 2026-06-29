
sexo = str(input('Digite o seu sexo[M/F]: ')).strip()
while sexo != 'M'and sexo != 'F':
    print('Sexo inválido')
    sexo = str(input('Digite novamente o seu sexo[M/F]: ')).strip()
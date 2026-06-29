totmulher20 = 0
anosvelho = 0
maisvelho = ''
mediaidade = 0
for p in range(1, 5):
    nome = str(input('Digite seu nome: ')).strip()
    idade = int(input('Digite sua idade: '))
    sexo = str(input('Digite seu sexo[M/F]: ')).strip()
    mediaidade = mediaidade + idade
    if p == 1 and sexo in 'Mm':
        maisvelho = nome
        anosvelho = idade
    if sexo in 'Mm' and idade > anosvelho:
        maisvelho = nome
        anosvelho = idade
    if sexo in 'Ff' and idade < 20:
        totmulher20 = totmulher20 + 1

print('A média de idade do grupo é {}'.format(mediaidade/4))
print(f'A pessoa mais velha é o {maisvelho} com seus {anosvelho} anos')
if totmulher20 == 1:
    print('Ao todo só tem 1 mulher com menos de 20 anos')
else:
    print(f'Ao todo são {totmulher20} mulheres com menos de 20 anos')



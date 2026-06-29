azul = '\033[0;34m'
red = '\033[0;31m'
green = '\033[0;32m'
limpa = '\033[m'
n1 = float(input('Digite a sua primeira nota: '))
n2 = float(input('Digite a sua segunda nota: '))
m = (n1 + n2) / 2
if m< 5:
    print(f'{red}REPROVADO{limpa}')
elif m >= 5 and m <= 6.9:
    print(f'{azul}RECUPERAÇÃO{limpa}')
elif m > 10:
    print('Você digitou algum valor de nota errado')
elif m >= 7:
    print(f'{green}APROVADO{limpa}')
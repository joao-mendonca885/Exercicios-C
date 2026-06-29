azul = '\033[0;34m'
red = '\033[0;31m'
green = '\033[0;32m'
limpa = '\033[m'
an = int(input('Digite o seu ano de nascimento: '))
if an >= 2015:
    print(f'{azul}MIRIM{limpa}')
elif an >= 2012:
    print(f'{azul}INFANTIL{limpa}')
elif an >= 2007:
    print(f'{azul}JUNIOR{limpa}')
elif an >= 2006:
    print(f'{azul}SENIOR{limpa}')
elif an < 2006:
    print(f'{azul}MASTER{limpa}')
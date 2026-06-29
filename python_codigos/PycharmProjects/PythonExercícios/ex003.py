cores = {'limpa': '\033[m',
         'vermelho': '\033[1;31m',
         'verde': '\033[1;32m',
         'amarelo': '\033[1;33m',
         'azul': '\033[1;34m',
         'azuls': '\033[4;34m'}



n1 = int(input('digite um numero: '))
n2 = int(input('digite outro numero: '))
s = n1 + n2
print(f'a soma entre {cores['azuls']}{n1}{cores['limpa']} e {cores['azuls']}{n2}{cores['limpa']} vale', end = ' ')
print(f'{cores['amarelo']}{s}{cores['limpa']}')
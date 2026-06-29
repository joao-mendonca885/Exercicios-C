import random
lista = ['pedra', 'papel', 'tesoura']
print('ESCOLHA:')
print('1 - pedra')
print('2 - papel')
print('3 - tesoura')
escolha = str(input('Sua escolha: '))
ec = random.choice(lista)
if ec == escolha:
    print(f'Empate, os dois escolheram {ec}')
elif ec == 'pedra' and escolha == 'tesoura':
    print('Eu venci, escolhi pedra')
elif ec == 'tesoura' and escolha == 'pedra':
    print('Eu perdi, escolhi tesoura')
elif ec == 'papel' and escolha == 'pedra':
    print('Eu venci, escolhi papel')
elif ec == 'pedra' and escolha == 'papel':
    print('Eu perdi, escolhi pedra')
elif ec == 'papel' and escolha == 'tesoura':
    print('Eu perdi, escolhi papel')
elif ec == 'tesoura' and escolha == 'papel':
    print('Eu venci, escolhi tesoura')

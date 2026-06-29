import random
np = 0
poi = 0
contador = 0
while True:
   np = int(input('Digite um valor:'))
   poi = str(input('Par ou Ímpar? [P/I] ')).strip().upper()
   nc = random.randint(0, 10)
   contador = contador + 1
   soma = np + nc
   if poi == 'P':
       if soma % 2 == 0:
           print(f'O computador escolheu {nc} e você escolheu {np}, a soma equivale a {soma}, logo é par e você ganhou!')
       else:
           print(f'O computador escolheu {nc} e você escolheu {np}, a soma equivale a {soma}, logo é ímpar e você perdeu!')
           break
   if poi == 'I':
       if soma % 2 == 0:
           print(f'O computador escolheu {nc} e você escolheu {np}, a soma equivale a {soma}, logo é par e você perdeu!')
           break
       else:
           print(f'O computador escolheu {nc} e você escolheu {np}, a soma equivale a {soma}, logo é ímpar e você ganhou!')
print(f'você conquistou {contador - 1} vitórias consecutivas')
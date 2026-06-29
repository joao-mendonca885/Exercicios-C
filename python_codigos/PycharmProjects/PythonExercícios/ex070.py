print('-' * 20)
print('LOJA DO MENDONÇA')
print('-' * 20)
soma = 0
maisdemil = 0
menor = 0
contador = 0
barato = ''
while True:
   np = str(input('Digite o nome do produto: '))
   v = float(input('Digite o valor do produto: '))
   c = input('Quer continuar? [S/N] ').strip().upper()
   contador = contador + 1
   soma = soma + v
   if v > 1000:
       maisdemil = maisdemil + 1
   if contador == 1:
       menor = v
       barato = np
   else:
       if v < menor:
           menor = v
           barato = np
   if c == 'N':
       break
print(f'O total da compra foi de R${soma}'
      f'Temos {maisdemil} produtos custando mais de 1000R$'
      f'O produto mais barato foi {barato} que custa R${menor}')



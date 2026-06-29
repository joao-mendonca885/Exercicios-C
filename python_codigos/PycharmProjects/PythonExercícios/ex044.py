preco = float(input('digite o preço do produto: R$ '))
print('digite 1 para o pagamento no cartão à vista')
print('digite 2 para o pagamento no dinheiro/cheque')
print('digite 3 para o pagamento no cartão com 2 parcelas mensais ')
print('digite 4 para o pagamento no cartão com 3 ou mais parcelas mensais ')
juros = preco * 1.2
cp = int(input('Qual a sua opção: '))
if cp == 1:
    print(f'Você ganhou 10 % de desconto, resultando um valor de {preco * 0.9}R$')
if cp == 2:
    print(f'Você ganhou 5% de desconto, resultando um valor de {preco * 0.95}R$')
if cp == 3:
    print(f'O valor de cada parcela será de {preco/2}R$, resultando num valor total de {preco}R$')
if cp == 4:
    parcelas = int(input('Quantas parcelas? '))
    print(f'O valor de cada parcela será de {juros/parcelas}R$, resultando num valor total de {juros}R$')
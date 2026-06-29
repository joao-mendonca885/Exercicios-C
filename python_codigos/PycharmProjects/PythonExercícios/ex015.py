#DESAFIO 15: Escreva um programa que pergunte a quantidade de Km percorridos por um carro alugado e a quantidade de dias
#pelos quais ele foi alugado. Calcule o preço a pagar, sabendo que o carro custa R$60 por dia e R$0,15 por Km rodado
km = float(input('Quantos quilometros o carro percorreu? '))
d = int(input('Quantos dias o carro permaneceu alugado? '))
p = (60 * d) + (0.15 * km)
print (f'O valor necessário para o pagamento do veículo é de: R$ {p:.2f}')
n1 = float(input('Digite o valor da primeira reta: '))
n2 = float(input('Digite o valor da segunda reta: '))
n3 = float(input('Digite o valor da terceira reta: '))
if n1 + n2 > n3 and n1 + n3 > n2 and n2 + n3 > n1:
    print('É possível formar um triângulo com essas retas')
else:
    print('Não é possível formar um triângulo com essas medidas')
n1 = float(input('Digite o valor da primeira reta: '))
n2 = float(input('Digite o valor da segunda reta: '))
n3 = float(input('Digite o valor da terceira reta: '))
if n1 + n2 > n3 and n1 + n3 > n2 and n2 + n3 > n1:
    print('É possível formar um triângulo com essas retas')
    if n1 == n2 == n3:
        print('O tipo de triângulo formado é equilátero')
    elif n1 != n2 != n3 != n1:
        print('O tipo de triângulo formado é escaleno')
    elif n1 == n2 and n2 != n3 or n1 == n3 and n3 != n2 or n3 == n2 and n2 != n1:
        print('O triângulo formado é do tipo isóceles')
else:
    print('Não é possível formar um triângulo com essas medidas')
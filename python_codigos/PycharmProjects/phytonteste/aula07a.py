# Operações Aritméticas

# Multiplicação: *
# Divisão: /
# Potência: **
# Divisão inteira: // (o resto não conta)
# Resto da Divisão: %
# Igualdade: ==

#Ordem de Precedência
# 1- Parenteses: ()
# 2- Potenciação: **
# 3- * / // %
# 4- + -

print( 5 * 6 + (7 + 5) ** 2)

#Função interna de potência:
print (pow(4,4))
# OBS da Função interna : PERDE A ORDEM DE PRECEDÊNCIA
nome = input ('Qual o seu nome?')
print(f'Prazer em te conhecer! {nome*20}')
print(f'Prazer em te conhecer! {nome:^20}')
print(f'Prazer em te conhecer! {nome:>20}')
print(f'Prazer em te conhecer! {nome:<20}')
print(f'Prazer em te conhecer! {nome:=^20}')
n1 = int(input('Digite um valor: '))
n2 = int(input('Digite outro valor: '))
s = n1 + n2
m = n1 * n2
p = n1 ** n2
d = n1 / n2
di = n1 // n2
print(f'A soma vale {s}, \no produto vale {m}, a potenciação vale {p}', end='')
print(f' a divisão vezes 3 vale {d*3:.3f} e a divisão sem resto vale {di}')
print(100//13%5)# essa operação é como se fosse 100 dividido por 13 e o resultado da 7, pois esse
#simbolo é uma divisão exata, caso não fosse exato, seria 7, alguma coisa, continuando...
#7 dividido por 5, porem o resultado só pega o resto da divisão, que no caso é 2

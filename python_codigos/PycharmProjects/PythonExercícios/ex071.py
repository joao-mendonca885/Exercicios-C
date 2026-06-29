saque = int(input('Qual o valor do saque? R$ '))
contadorc = 0 # nota 50 reais
rdiv = saque % 50
nota20 = rdiv // 20 # nota 20 reais
rdiv20 = rdiv % 20
nota10 = rdiv20 // 10
rdiv10 = rdiv20 % 10
for c in range(50, saque+1, 50):
    contadorc = contadorc + 1
print(f'Serão necessárias {contadorc} cédulas de 50 reais,{nota20} cédulas de 20 reais, {nota10} cédulas de 10 real e {rdiv10} cédulas de 1 real')
#Outro jeito muito mais prático de resolver, que o cara do comentário mostrou:
valor = int(input("Quanto você quer sacar? R$"))
              #1   2   3   4
for cedula in [50, 20, 10, 1]:
    quantidade = valor // cedula
    valor = valor % cedula
    if quantidade > 0:
        print(f"{quantidade} cédula(s) de R${cedula}")
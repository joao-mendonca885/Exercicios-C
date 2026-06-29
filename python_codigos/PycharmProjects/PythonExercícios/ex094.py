#Crie um programa que leia nome, sexo e idade de várias pessoas,
#guardando os dados de cada pessoa em um dicionário
#e todos os dicionários em uma lista. 
# No final, mostre:
#A) Quantas pessoas foram cadastradas
#B) A média de idade
#C) Uma lista com as mulheres
#D) Uma lista de pessoas com idade acima da média
continuar = "s"
info = {}
lista = []
cont = 0
while continuar == "s":
    cont = cont + 1
    info["Nome"] = str(input("Nome: "))
    info["Sexo"] = str(input("Sexo[M/F]: ")).strip().lower()
    info["Idade"] = int(input("Idade: "))
    lista.append(info.copy())
    continuar = str(input("Quer continuar? [S/N] ")).strip().lower()
    while continuar != "s" and continuar != "n":
        print("Erro! Por favor, digite apenas S ou N")
        continuar = str(input("Quer continuar? [S/N] ")).strip().lower()
print(f"A) Ao todo temos {cont} pessoas cadastradas")
soma = 0
print(lista)
for i in range(0, cont):
    soma = soma + lista[i]["Idade"]
media = soma / cont

print(f"B)A média de idade é de {media:.2f} anos")
print("C)A lista das mulheres cadastradas foram:")
for dicionario in lista:
    if dicionario["Sexo"] == "f":
        print(dicionario["Nome"])
print("D)Lista das pessoas que estão acima da média:")

for dicionario in lista:
    if dicionario["Idade"] > media:
        print(f"nome = {dicionario["Nome"]}; sexo = {dicionario["Sexo"]}; idade = {dicionario["Idade"]}")
print("<<<   Encerrado   >>>")
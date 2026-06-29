# Faça um programa que leia nome e média de um aluno, 
# guardando também a situação em um dicionário. 
# No final, mostre o conteúdo da estrutura na tela.
dicionario = {}

nome = str(input("Nome: "))
media = float(input(f"Média de {nome}: "))

dicionario["Nome"] = nome
dicionario["Media"] = media

print(f"O nome é {dicionario["Nome"]}")
print(f"A média é de {dicionario["Media"]}")

dicionario["Situacao"] = "Recuperação" if media < 7 else "Aprovado" 
print(f"A situação é {dicionario['Situacao']}")
    



#Crie um programa que leia o nome completo de uma pessoa e mostre:
# O nome com todas as letras maiúsculas
# O nome com todas as letras minúsculas
# Quantas letras ao todo(sem considerar espaços)
#Quantas letras tem o primeiro nome.
nome = str(input("Digite o seu nome:")).strip()
print(f'o nome com todas as letras maiúsculas: {nome.upper()}')
print(f'o nome com todas as letras minúsculas:{nome.lower()}')
nome_sem_espaco = nome.replace(" ", "")
quantidade_de_letras = len(nome_sem_espaco)
print(f'Quantidade de letras: {quantidade_de_letras}')
dividido = nome.split()
letras_1nome = len(dividido[0])
print(f'Quantidade de letras de 1 nome é: {letras_1nome}')

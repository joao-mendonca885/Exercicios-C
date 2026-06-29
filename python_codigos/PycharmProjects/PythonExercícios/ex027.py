#Faça um programa que leia o nome completo de uma pessoa, mostrando em seguida o primeiro
#e o ultimo nome separadamente.
nome = str(input('Digite seu nome completo: ')).strip()
print(f'primeiro nome: {nome.split()[0]}')
nome1 = nome.split()
print(len(nome1))
print(f'último nome: {nome1[len(nome1)-1]}')
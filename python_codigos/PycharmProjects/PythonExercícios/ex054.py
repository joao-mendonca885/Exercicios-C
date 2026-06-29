total = 0
total2 = 0
for c in range(1,8):
    ano = int(input('Digite o ano de nascimento: '))
    if ano <=2008:
        total = total + 1
    else:
        total2 = total2 + 1
print(f'\033[32m{total}\033[m pessoas atingiram a maior de idade e \033[32m{total2}\033[m pessoas não atingiram a maior de idade')
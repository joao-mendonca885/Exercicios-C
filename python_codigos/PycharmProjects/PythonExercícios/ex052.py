n = int(input('Digite um número inteiro:'))
total = 0
for c in range(1,n+1):
    if n % c == 0:
        print(f'\033[1;32m {c}',end='')
        total = total + 1
    else:
        print(f'\033[1;31m {c}' ,end='')
print(f'\n\033[mO número {n} foi divísivel {total} vezes')
if total == 2:
    print('Este é um número primo')
else:
    print('Este não é um número primo')

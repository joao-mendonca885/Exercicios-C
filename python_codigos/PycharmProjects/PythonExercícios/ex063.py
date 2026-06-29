n = int(input('Digite um número inteiro:'))
t1 = 0
t2 = 1
contador = 3
print(f'{t1}-> {t2}', end= '-> ')
while contador <= n:
    t3 = t1 + t2
    print(t3, end='-> ')
    contador = contador + 1
    t1 = t2
    t2 = t3




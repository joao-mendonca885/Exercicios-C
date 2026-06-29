n1 = float(input('digite um número: '))
n2 = float(input('digite outro número: '))
n3 = float(input('digite outro número: '))
if n1 > n2 > n3:
    print(f'{n1} é o maior número e {n3} é o menor número')
if n2 > n3 > n1:
    print(f'{n2} é o maior número e {n1} é o menor número')
if n1 > n3 > n2:
    print(f'{n1} é o maior número e {n2} é o menor número')
if n2 > n1 > n3:
    print(f'{n2} é o maior número e {n3} é o menor número')
if n3 > n2 > n1:
    print(f'{n3} é o maior número e {n1} é o menor número')
if n3 > n1 > n2:
    print(f'{n3} é o maior número e {n2} é o menor número')
if n3 == n2 == n1:
    print(f'não há número maior ou menor')
if n1 == n2 > n3:
    print(f'nesse caso, os maiores números são {n1} e {n2} e o menor número é {n3}')
if n1 == n3 > n2:
    print(f'nesse caso, os maiores números são {n1} e {n3} e o menor número é {n2}')
if n2 == n3 > n1:
    print(f'nesse caso, os maiores números são {n2} e {n3} e o menor número é {n1}')
if n1 == n2 < n3:
    print(f'nesse caso, os maior número é {n3} e os menores números são {n1} e {n2}')
if n1 == n3 < n2:
    print(f'nesse caso, os maior número é {n2} e os menores números são {n1} e {n3}')
if n2 == n3 > n1:
    print(f'nesse caso, os maior número é {n1} e os menores números são {n3} e {n2}')

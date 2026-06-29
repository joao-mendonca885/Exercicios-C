n1 = s = 0
while True:
    n1 = int(input('Digite um número:'))
    if n1 == 999:
        break
    s = s + n1
print(f'A soma vale {s}')
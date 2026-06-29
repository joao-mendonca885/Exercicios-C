n = int(input('Digite um número para o cálculo do fatorial: '))
fatorialacumulado = 1
contador = 1
for c in range(1, n+1):
    fatorialacumulado = fatorialacumulado * contador
    contador = contador + 1
print(fatorialacumulado)


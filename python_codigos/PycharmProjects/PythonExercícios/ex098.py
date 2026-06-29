def contador(inicio, fim, passo):
    soma = 0
    for i in range(inicio, fim+1, passo):
        soma = soma + i
    print(soma)

contador(1, 10, 1)
contador(1, 10, 2)
inicio = int(input("Inicio: "))
fim = int(input("Fim: "))
passo = int(input("Passo: "))
contador(inicio, fim, passo)
#Laços de repetição: Parte 2
#Também é considerado um loop e repete todos os comandos até concluir no ponto específico
n = 1
r = 'S'
while n != 0 and r in 'sS':
    n = int(input('Digite um número de 0 a 10: '))
    if n != 0:
        r = str(input('Quer continuar? [S/N]'))
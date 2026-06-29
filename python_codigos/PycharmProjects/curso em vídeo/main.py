a = float(input('Digite o coeficiente angular: '))
b = float(input('Digite o coeficiente do termo de primeiro grau: '))
c = float(input('Digite o coeficiente linear: '))

delta = b**2 - 4*a*c
raizdedelta = delta**(1/2)
if delta < 0:
    print('Não existe solução real.')
raiz1 = (-b + raizdedelta) / (2 * a)
raiz2 = (-b - raizdedelta) / (2 * a)
if delta > 0:
    print(f'As raízes da equação são {raiz1} e {raiz2}')
if delta == 0:
    print(f'Como o delta é igual a 0, só existe uma solução real', end =' ')
    print(f'sendo {raiz1} a solução')

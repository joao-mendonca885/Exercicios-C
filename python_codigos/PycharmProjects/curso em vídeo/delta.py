import math
a = float(input('Digite o coeficiente angular: '))
b = float(input('Digite o coeficiente do termo de primeiro grau: '))
c = float(input('Digite o coeficiente linear: '))

delta = b**2 - 4*a*c
raizdedelta = math.sqrt(delta)
raiz1 = (-b + raizdedelta) / (2 * a)
raiz2 = (-b - raizdedelta) / (2 * a)
print(f'As raízes da equação são {raiz1} e {raiz2}')
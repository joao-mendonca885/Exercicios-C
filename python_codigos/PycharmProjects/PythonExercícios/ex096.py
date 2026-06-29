

def area(l, c):
    print(f"A área de um terreno {l}x{c} é de {l*c:.1f}m^2")




print(f"{"Controle de terrenos":^20}")
print("=" * 20)
l = float(input("Largura(m): "))
c = float(input("Comprimento(m): "))
area(l, c)
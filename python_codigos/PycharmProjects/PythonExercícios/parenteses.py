lista = []
expressao = input("Digite uma expressão qualquer: ")
for caracter in expressao:
    if caracter == "(":
        lista.append(caracter)
    elif caracter == ")":
        if len(lista) > 0:
            lista.pop() # esse comando apaga o ultimo valor da lista
        else:
            lista.append(caracter)
            break
if len(lista) == 0:
    print("A expressao está correta")
else:
    print("A expressão está incorreta")
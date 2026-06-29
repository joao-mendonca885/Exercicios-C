texto = "python é legal"

print(texto.find("é"))
print(texto.find("java"))
frase2 = "   Aprenda Python   "
frase2 = frase2.strip()
print(frase2)
frase2 = "   Aprenda Python   "
frase2 = frase2.split()
print('-'.join(frase2))
# É equivalente à


frase = "Curso em vídeo Python"
dividido = frase.split()
print(dividido[0])

palavras = list("Curso em vídeo python")
print(palavras)
lanches.remove("Pizza")
lanches.pop(2)

n = 5.532415

print(f"{n:.2f}")
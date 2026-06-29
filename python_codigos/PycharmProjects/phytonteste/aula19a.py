
#Um dicionário normal
filme = {"título": "Star wars",
         "ano":1997,
         "Diretor": "George Lucas"}
# uma lista de dicionários
locadora = [{"titulo": "Star Wars","ano":1997,"Diretor": "George Lucas"},
            {"titulo": "Avengers", "ano": 2012, "Diretor": "Joss Whedon"},
             {"titulo": "Matrix", "ano": 1999, "Diretor": "Wachowski"}]

print(locadora[0]["ano"])
print(locadora[1]["titulo"])
filme["Sexo"] = 'M' #adicionamos um novo valor("M"), com seu res 
#pectivo nome, ao dicionário filme
#imprimir valores:
print(filme["Sexo"]) #imprimindo um o que está no nome "Sexo"
print(filme.values()) #imprimindo todos os valores
#imprimir índices:
print(filme.keys()) #imprimo todos os índices
#imprimir os valores + indices
for i, k, in filme.items():
    print(f"o {i} é {k}")
#retirar um elemento dentro do dicionário
filme.pop("Sexo") #removo o indice e o elemento
del filme["Sexo"] #da no mesmo
print(locadora[0]["titulo"])


texto = "Python é legal"

print(texto.find("é")) #find --> usado somente para strings
print(texto.find("java"))

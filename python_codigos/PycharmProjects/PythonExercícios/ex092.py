#Crie um programa que leia nome, ano de nascimento e carteira de trabalho e cadastre-o (com idade) em um dicionário. 
#Se por acaso a CTPS for diferente de ZERO, 
#o dicionário receberá também o ano de contratação e o salário. 
#Calcule e acrescente, além da idade, 
#com quantos anos a pessoa vai se aposentar.
register = {}


register["Nome"] = input("Nome: ")
ano_de_nascimento = int(input("Ano de nascimento"))
register["idade"] = 2026 - ano_de_nascimento

register["Carteira de trabalho"]= int(input("Carteira de trabalho(0 não tem): "))
if register["Carteira de trabalho"] == 0:
    for k, v in register.items():
        print(f"{k} tem o valor {v}")
else:
    register["Ano de contratação"] = int(input("Ano de contratação: "))
    register["Salário"] = float(input("Salário"))
    register["Aposentadoria"] = 65 - register["idade"]
    print("==============================\n")
    for k, v in register.items():
        print(f"{k} tem o valor de {v}")

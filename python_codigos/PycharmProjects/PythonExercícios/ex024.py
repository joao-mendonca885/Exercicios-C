# Nome da cidade começa ou não com a palavra "Santo"n
nc = str(input('Digite o nome de uma cidade: ')).strip()
print(f"o nome da cidade começa com a palavra SANTO? {'SANTO' in nc.upper()[0:5]}")
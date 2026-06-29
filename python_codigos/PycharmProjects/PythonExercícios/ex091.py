#Crie um programa onde 4 jogadores joguem um dado e tenham resultados aleatórios. 
# Guarde esses resultados em um dicionário em Python. 
# No final, coloque esse dicionário em ordem, 
# sabendo que o vencedor tirou o maior número no dado.

import random
dicionario = dict()
for i in range(1,5):
    dicionario[f"jogador{i}"] = random.randint(1,6)
    print(f"jogador{i} tirou {dicionario[f"jogador{i}"]} no dado") 


print(f"{"==":<5}{"RANKING DOS JOGADORES":^30}{"==":>5}")
descendingDict = dict(sorted(dicionario.items(), key = lambda item: item[1], reverse=True))

p = 1

for chave, valor in descendingDict.items():
    print(f"     {p} lugar: {chave} com {valor}")
    p = p + 1
    
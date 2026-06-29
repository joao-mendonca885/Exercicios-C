#Crie um programa que gerencie o aproveitamento de um jogador de futebol.
#O programa vai ler o nome do jogador e quantas partidas ele jogou.
#Depois vai ler a quantidade de gols feitos em cada partida
#No final, tudo isso será guardado em um dicionário, incluindo o total de gols feitos durante o campeonato.
dadosJogador = {}
dadosJogador["Nome"] = str(input("Nome"))
dadosJogador["Partidas jogadas"] = int(input("Partidas jogadas: "))
gols = []
for i in range(0, dadosJogador["Partidas jogadas"]):
    gol = int(input(f"Quantos gols na partida {i}? "))
    gols.append(gol)
print("=-" * 30)
total = 0
for qtd in gols:
    total = total + qtd
dadosJogador["Gols"] = gols[:]
dadosJogador["Total"] = total
print(dadosJogador)
print("=-" * 30)
for k, v in dadosJogador.items():
    print(f"O campo {k} tem o valor {v}")
print("=-" * 30)
print(f"O jogador {dadosJogador["Nome"]} jogou {dadosJogador["Partidas jogadas"]}")
for p, qtd in enumerate(gols):
    print(f"    => Na partida{p}, fez {qtd} gols")
print(f"Foi um total de {total}")
#Aprimore o desafio 93 para que ele funcione com vários jogadores
#incluindo um sistema de visualização de detalhes do aproveitamento 
#de cada jogador.
continuar = "s"
cont = 0
lista = []
dadosJogador = {}
while continuar == "s":
    cont += 1
    dadosJogador["Nome"] = str(input("Nome"))
    dadosJogador["Partidas jogadas"] = int(input("Partidas jogadas: "))
    gols = []
    for i in range(0, dadosJogador["Partidas jogadas"]):
        gol = int(input(f"Quantos gols na partida {i}? "))
        gols.append(gol)
    total = 0
    for qtd in gols:
        total = total + qtd
    dadosJogador["Gols"] = gols[:]
    dadosJogador["Total"] = total
    lista.append(dadosJogador.copy())
    continuar = str(input("Quer continuar? [S/N]")).lower().strip()
    while continuar not in ("s", "n"):
        print("Erro! Digite um valor válido")
        continuar = str(input("Quer continuar? [S/N]")).lower().strip()
print("-------------------------------------------------------")
print(f"{"cod":<4}{"nome":>10}{"gols":>10}{"total":>10}")
print("-------------------------------------------------------")
n = 0
for n, dicionario in enumerate(lista):
    print(f"{n:<4}{dicionario["Nome"]:>10}      {dicionario["Gols"]}{dicionario["Total"]:>10}")

while True:
    n = int(input("Mostrar os dados de qual jogador? (999 para parar) "))
    if n == 999: break
    print(f"--- Levantamento do jogador {lista[n]["Nome"]}:")
    for i, v in enumerate(lista[n]["Gols"]):
        print(f"No jogo {i+1} fez {v} gols")
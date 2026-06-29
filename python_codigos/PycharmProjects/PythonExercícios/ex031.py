dv = float(input('Qual foi a distância da viagem em km/h?'))
if dv <= 200:
    print(f'O preço da sua viagem foi {dv*0.5}reais')
else:
    print(f'O preço da sua viagem foi {dv*0.45}reais')
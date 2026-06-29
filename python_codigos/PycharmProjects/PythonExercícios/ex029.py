vc = float(input('Digite a velocidade de um carro em km/h: '))#primeiro tem que vir o float, depois o input
x = vc - 80
if vc > 80:
    print('Você foi multado!')
    print(f'Sua multa será no valor de {x * 7} Reais')
else:
    print('Você estava dentro da velocidade permitida')
    print('Não há multa a te cobrar')
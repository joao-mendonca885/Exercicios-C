s = float(input('Digite o valor do seu salário em reais: '))
if s > 1250:
    print(f'seu salário agora passa a ser {s * 1.1} ')
if s <= 1250:
    print(f'seu salário agora passa a ser {s * 1.15}')

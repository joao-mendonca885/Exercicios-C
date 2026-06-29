# a prestação mensal não pode exceder 30% do salário
vc = float(input('Qual o valor da casa? '))
s = float(input('Qual o seu salario? '))
anos = int(input('Em quantos anos deseja pagar?'))
pm = vc / (anos * 12)
if pm <= 0.3 * s:
    print(f'o valor de cada prestação mensal será {pm} reais')
else:
    print('Empréstimo negado')
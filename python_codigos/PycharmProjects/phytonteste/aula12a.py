nome = str(input('Qual o seu nome? '))
if nome == 'Gustavo':
    print('Que nome bonito')
if nome == 'Pedro' or nome == 'Maria' or nome == 'Paulo':
    print('Seu nome é bem popular no Brasil')
else:
    print('Seu nome é bem normal')
print(f'Tenha um bom dia, {nome}!')

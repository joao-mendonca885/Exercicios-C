peso = float(input('Digite o seu peso em kilogramas: '))
altura = float(input('Digite sua altura em metros: '))
imc = peso / (altura * altura)
print(f'O IMC dessa pessoa é de {imc}')
if imc < 18.5:
    print(f'Abaixo do peso')
elif imc >= 40:
    print(f'Obesidade mórbida')
elif imc >= 30:
    print(f'Obesidade')
elif imc >= 25:
    print(f'Sobrepeso')
elif imc >= 18.5:
    print(f'Peso ideal')

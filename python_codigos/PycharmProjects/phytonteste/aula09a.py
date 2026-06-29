#MANIPULANDO TEXTOS(strings)
#Técnicas:
#1- FATIAMENTO:
frase = 'Curso em Vídeo Python'
print(frase[9])
print(frase[9:14]) #começa no 9 e vai até o 13
print(frase[9:23]) #mesmo que não tenha o número 23, vai até o número final
print(frase[9:21:2]) #percebe-se que agora foi de 2 em 2
print(frase[:5]) #se omitir o caractere de inicio, ele compreende que começa no 0
print(frase[15:]) #da mesma forma que se omitir o a parada, ele vai até o final
print(frase[9::3])
#2-ANÁLISE:
print(len(frase))# o "len" vem de comprimento, então com esse comando quero saber o tamanho da frase.
#nesse caso, tem-se 21 caracteres(os espacos vazios contam), e começa do 1
print(frase.count('o')) #com ele da para descobrir quantos elementos 'x' tem na string
#nesse caso, tem-se 3 'o' na string
print(frase.count('o',0,13)) #como se fosse uma contagem já com fatiamento
#Nesse caso, do 0 até o 12 tem 1 '0'
print(frase.find('deo')) #Encontrei o 'deo' na posição 11
# Lembrando que ele diz o número de início da string
print(frase.find('Android')) #Quando aparece -1, significa que não foi encontrado
print('Curso' in frase) # como se fosse uma pergunta: Existe 'curso' em frase?
#3-TRANSFORMAÇÃO:
print(frase.replace('Python','Android')) #literalmente o nome.
#substitui o primeiro termo (Python), pelo segundo termo (Android) no varíavel frase
print(frase.upper())
print(frase.isalpha())#Lembrando que um espaço vazio não está no alfabeto.
#por isso a variável "frase" não está dentro dos alfábeticos
print(frase.lower())
print(frase.capitalize()) #bota todos os caracteres com letra mínuscula, menos o primeiro caracter.
print(frase.title()) #bota os termos iniciais após um espaço vazio, em maiúsculo
frase2 = "   Aprenda Python  "
print(frase2.strip()) #remove os espaços "inúteis," como os do início e do final.
print(frase2.lstrip()) #remove os espaços inúteis da esquerda
print(frase2.rstrip()) #remove os espaços inúteis da direita
print(frase2.split()) # divide os termos em strings separadas , com separação com lista
print('-'.join(frase2.split()))#adiciona 'x' coisa nos espaços vazios das strings
print("""A taxa de câmbio do dólar hoje é 5,22 Real Brasileiro. A cotação comercial do dólar é sempre atualizada, 
para que você possa ficar informado sobre o dólar e""")
print(frase2.upper().count("O"))
print(len(frase2.replace("Python","Android")))
frase.replace("Python","Android")
print(frase)
print(frase.split()) # Até em split, o primeiro termo é contabilizado como zero
print(len(frase.split()))
dividido = frase.split()
print(dividido[0])
print(frase.rfind('o')) #aqui aparece o último 'o' da string













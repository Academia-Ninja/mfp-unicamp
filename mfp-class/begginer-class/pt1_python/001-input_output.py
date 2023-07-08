# Entrada
nome = input("Escreva seu nome: ") # por padrão, o input é definido em string

idade = int (input("Escreva sua idade: ")) # tipagem da variável que será recebida

altura = float(input("Escreva sua altura: "))

dia = int (input("Escreva o dia que nasceu: "))

mes = int (input("Escreva o mês que nasceu: "))

ano = int (input("Escreva o ano que nasceu: "))

# Saída
print("A pessoa é: ", nome)
print("Tem ", idade, " anos")
print(altura, "de altura")
print("Nasceu em: ", end="") # end é uma flag para o Python não pular linha, característica padrão da linguagem
print(dia, mes, ano, sep="/") # imprimirá o valor das variáveis separando-as com /
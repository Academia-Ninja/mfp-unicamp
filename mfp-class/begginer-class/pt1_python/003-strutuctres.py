# Estruturas
valorX = 10
valorY = 8

# Estruturas Lógicas
# Operadores Aritméticos - expressões matemáticas
valor = valorX + valorY 
valor = valorX * valorY
valor = valorX / valorY
valor = valorX - valorY
valor = valorX % valorY # mod
valor = valorX // valorY # divisão inteira
valor = valorX ** valorY # exponenciação

# Operadores de Atribuição - atribuir valores, podendo ser unidos aos operadores aritméticos
x = 10
x += 1
x -= 1
x *= 1
x /= 1
x %= 1

# Operadores de Comparação - comparação de dois valores
print(x == 1) # igualdade
print(x != 1) # diferente
print(x > 1) # maior
print(x < 1) # menor
print(x >= 1) # maior igual
print(x <= 1) # menor igual

# Operadores Lógicos - testes lógicos
print(x > 1 and x < 100) # E
print(x > 1 or x < 100) # OU
print(not(x > 1 and x < 100)) # Não

# Estruturas Condicionais
idade = 16

# if - verificação de uma condição
# if-else -  verificação de duas condições
# if-elif-else -  verificação de três ou mais condições
if idade >= 18:
  print("Voto obrigatório")
elif idade >= 16 or idade >= 65:
  print("Voto optativo")
else:
  print("Voto não obrigatório")

# ternário - if escrito em apenas uma linha
resultado = "Voto obrigatório" if idade >= 18 and idade <= 65 else "Voto não obrigatório"
print(resultado)

# Estruturas de Repetição
x = 10
# Loops For - repetição em um determinado número de vezes
for i in range(0, 5, 1): # de 0 a 4, acréscimo de 1
  x += i # será incluso ao for apenas o que tiver indentado após ele

print(x)

# Loops while - repetição até que a condição seja satisfeita
while x < 100:
  x += 10

print(x)
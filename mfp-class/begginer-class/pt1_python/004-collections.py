# Coleções
# Listas - coleções de valores com diversos itens
notas = [10, 8, 10, 5]
alunos = ['Estela', 'Ana', 'João', 'Mateus']

for aluno in alunos:
  print("Aluno: ", aluno)

print()

for i in range(len(notas)):
  print("Nota: ", notas[i])

print()

[print(f'nome: {alunos[i]}, nota:{nota}')
for i, nota in enumerate(notas)]
print()

print(alunos[1:3]) # escreve apenas os valores entre os indicados
del alunos[1] # remover elemento
print(alunos[-1]) # imprime elemento removido

# Dicionários - coleções de itens que relaciona uma chave a um ou mais elementos
aluno = {'Estela': 10, 'Ana': 8, 'João': 10}

for chave in alunos.keys():
  print('Aluno: ', chave, ' Nota: ', alunos[chave])

print(alunos.keys())
print(alunos.values())
del alunos['Estela']

alunos.update({'Matheus': 5}) #novo valor
alunos.update({'Ana': 10}) # atualiza valor

# Conjuntos (Sets): coleção que não repete valores e os itens não podem ser modificados
exemploSet = {1, 1, 2, 3, 4, 5} # o segundo elemento 1 será ignorado
exemploSet.add(6) # adiciona o elemento 6, caso exista
exemploSet.remove(3) # remove o elemento 6, caso exista
print(3 in exemploSet)

for item in exemploSet:
  print(item);

# Funções - blocos de código para execução de funcionalidades específicas que se repetem diversas vezes. Não é necessário indicar o tipo na função em Python
def vazia():
  pass # palavra reservada para passar pela função vazia, sem parâmetros ou entradas

def soma(x, y):
  return x + y

def calculos(x, y):
  soma = x + y
  subtracao = x - y
  multiplicacao = x * y

  return soma, subtracao, multiplicacao

def imprime(valor):
  print(f"Valor: {valor}")

vazia()
soma = soma(1, 2)
imprime(soma)
soma, subtracao, multiplicacao = calculos(10, 5)
imprime(soma)
imprime(subtracao)
imprime(multiplicacao)
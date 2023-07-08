# BeeCrowd
# Problema 1037

number = float(input())

if number >= 0 and number <= 25:
    print("Intervalo [0,25]")
elif number > 25 and number <= 50:
    print("Intervalo (25,50]")
elif number > 50 and number <= 75:
    print("Intervalo (50,75]")
elif number > 75 and number <= 100:
    print("Intervalo (75,100]")
else:
    print("Fora de intervalo")


# Problema 1059
for i in range (1, 101):
  if(i % 2 == 0):
    print(i)

# Problema 1176
Fib = []
Fib.append(0)
Fib.append(1)

for i in range(2, 61):
  Fib.append(Fib[i-2] + Fib[i-1])

n = int(input())

for j in range(0, n):
  i = int(input())
  print("Fib(", i, ") = ", Fib[i], sep="")

# Problema 1142, 1175, 1240, 2003 - TODO
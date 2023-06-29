while True:
  n = int(input())
  if n == 0:
    break
  
  entrada = list(map(int, input().split()))
  maior = max(entrada)
  entrada[entrada.index(maior)] = 0
  maior = max(entrada)

  print(entrada.index(maior) + 1)


dias, saldo = map(int, input().split())
menor = saldo
for i in range(dias):
  x = int(input())
  saldo += x

  if saldo < menor:
    menor = saldo

print(menor)

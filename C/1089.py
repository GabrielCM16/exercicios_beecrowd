while True:
  n = int(input())
  if n == 0:
    break
  
  entrada = list(map(int, input().split()))

  cont = 0

  for i in range(n):
    if entrada[i - 1] < entrada[i] and entrada[i] > entrada[(i + 1) % n] or entrada[i - 1] > entrada[i] and entrada[i] < entrada[(i + 1) % n]:
      cont += 1

  print(cont)




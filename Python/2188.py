teste = int()
n = int(input())
while n > 0:
  x, v = -10000, -10000 # 10 mil
  y, u = 10000, 10000 #10 mil

  for i in range(n):

    caso_teste = list(map(int, input().split()))

    if caso_teste[0] > x:
      x = caso_teste[0]
    if caso_teste[1] < y:
      y = caso_teste[1]
    if caso_teste[2] < u:
      u = caso_teste[2]
    if caso_teste[3] > v:
      v = caso_teste[3]

  teste += 1 

  print("Teste", teste)    

  if x < u and v < y:
    print(f'{x} {y} {u} {v}')
  else: print("nenhum")

  print('')

  n = int(input()) 
    

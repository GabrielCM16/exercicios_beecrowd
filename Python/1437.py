while True:
  x = int(input())
  if x == 0:
    break
  cont = 0
  #{0: 'N', 1: 'L', 2: 'S', 3: 'O'}
  direcoes = ['N','L','S','O']
  #começa no norte
  # esquerda vai pro oeste
  # direita vai pro sul
  a = input()
  for i in range(x):
    letra = a[i]  
    if letra == 'D':
      cont += 1 
    else: cont -= 1
    if cont == 4 or cont == -4:
      cont = 0
  print(direcoes[cont])

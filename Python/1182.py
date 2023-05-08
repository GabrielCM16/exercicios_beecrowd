coluna = int(input())
operacao = input()

matriz = [[],[],[],[],[],[],[],[],[],[],[],[]]

#adicionando todos os numeros na matriz 12x12
for i in range(12):
  for j in range(12):
    numero = float(input())
    matriz[i].append(numero)

#fazendo a soma da matriz
soma_matriz = float()
for i in range(12):
  soma_matriz += matriz[i][coluna]

if operacao == 'M':
  media = soma_matriz / 12
  print(f'{media:.1f}')
else: print(f'{soma_matriz:.1f}')
  

vetorPar = []
vetorImpar = []

for i in range(15):
  entrada = int(input())
  
  if abs(entrada) % 2 == 0:
    vetorPar.append(entrada)
  else: vetorImpar.append(entrada)


  if len(vetorPar) == 5:
    for b in range(5):
      print(f'par[{b}] = {vetorPar[b]}')
    vetorPar = []

  if len(vetorImpar) == 5:
    for b in range(5):
      print(f'impar[{b}] = {vetorImpar[b]}')
    vetorImpar = []

for i in range(len(vetorImpar)):
  print(f'impar[{i}] = {vetorImpar[i]}')

for i in range(len(vetorPar)):
  print(f'par[{i}] = {vetorPar[i]}')

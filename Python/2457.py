letra = input()
frase = input().split()

n_palavras = int()

for i in range(len(frase)):
  if letra in frase[i]:
    n_palavras += 1
  else: continue

porcentagem = (n_palavras * 100) / len(frase)

print(f'{porcentagem:.1f}')
  

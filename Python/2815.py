entrada = input().split()

for i in range(len(entrada)):
  palavra = entrada[i]
  #verificando se possui silabas repetidas
  if palavra[0:2] == palavra[2:4]:
    entrada[i] = palavra[2: len(palavra)]

#printando a entrada da maneira correta
for i in range(len(entrada)):
  if i == len(entrada) - 1:
    print(entrada[i])
  else:
    print(entrada[i], end=' ')

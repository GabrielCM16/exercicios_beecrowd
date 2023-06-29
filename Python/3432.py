entrada = input().split()
for i in entrada:
  if i != '0' and i != '1':
    saida = "F"
    break
  else: saida = "S"
print(saida)

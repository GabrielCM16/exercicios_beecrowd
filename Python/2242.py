entrada = input()
vogais = ['a','e','i','o','u']

seq_vogal = str()
#separando as vogais
for i in range(len(entrada)):
  if entrada[i] in vogais:
    seq_vogal += entrada[i]

seq_vogal_invertida = str()
#invertendo as vogais separadas
for i in range(len(seq_vogal) - 1, -1, -1):
  seq_vogal_invertida += seq_vogal[i]

if seq_vogal == seq_vogal_invertida:
  print('S')
else: print('N')

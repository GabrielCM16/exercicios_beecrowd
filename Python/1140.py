while True:
  entrada = input()
  if entrada == '*':
    break

  letra = entrada.split()[0][0].lower()
  cont = 0
  
  for palavra in entrada.split():
    if palavra[0].lower() == letra:
      cont += 1
    else: break
    
  if cont == len(entrada.split()):
    print('Y')
  else: print('N')

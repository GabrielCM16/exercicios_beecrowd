while True:
  try:
    entrada = input()

    entrada_Dancante = str()

    ultimo_maior = False

    for i in range(len(entrada)):
      letra = entrada[i]
      if letra.isalpha():

        if ultimo_maior == False:
          entrada_Dancante += letra.upper()
          ultimo_maior = True

        else: 
          entrada_Dancante += letra.lower()
          ultimo_maior = False

      else: 
        entrada_Dancante += letra

    print(entrada_Dancante)
  except EOFError:
    break

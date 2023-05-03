while True:
  try:
          
      entrada = input().split()

      lista_letras = list()
      n_alite = int()

      #separando as primerias letras e colocando em uma lista
      for i in range(len(entrada)):
        letra = entrada[i][0]
        lista_letras.append(letra.lower())

      sequencia_ali = int()

      ultima_letra = str()

      for i in range(len(lista_letras) - 1):
        ultima_letra = lista_letras[i - 1]

        if lista_letras[i] == lista_letras[i + 1] and ultima_letra != lista_letras[i]:
          ultima_letra = lista_letras[i]
          sequencia_ali += 1

      print(sequencia_ali)
 
  except EOFError:
    break

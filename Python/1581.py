for i in range(int(input())):
  n_pessoas = int(input())
  list_pessoas = list()


  for j in range(n_pessoas):
    nome = input()
    list_pessoas.append(nome)

  n_nomes_repeti = int()

  for j in range(n_pessoas - 1):
    if list_pessoas[j] == list_pessoas[j + 1]:
      n_nomes_repeti += 1

  if n_nomes_repeti == len(list_pessoas) - 1:
    print(list_pessoas[0])
  else: print("ingles")

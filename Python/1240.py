for i in range(int(input())):
  a, b = input().split()

  if len(b) > len(a):
    print("nao encaixa")

  else:
    tam = len(b) - len(a)

    str_aux = a[abs(tam): len(a)]

    if str_aux == b:
      print("encaixa")
    else: print("nao encaixa")

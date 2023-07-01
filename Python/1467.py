a = {
    0: "A",
    1: "B",
    2: "C"
}
while True:
  try:
    entrada = input().split()
    if len(set(entrada)) == 1:
      print('*')
      continue
    else:
      n1 = 0
      n0 = 0
      for i in entrada:
        if i == "1":
          n1 += 1
        else: n0 += 1
      if n0 < n1:
        print(a[entrada.index("0")])
      else: print(a[entrada.index("1")])
  except EOFError:
    break

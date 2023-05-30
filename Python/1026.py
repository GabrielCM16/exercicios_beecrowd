while True:
  try:
    a, b = input().split()
    a, b = int(a), int(b)

    sum = ((a) ^ b)

    print(sum)

  except EOFError:
    break

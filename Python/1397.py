while True:
  n = int(input())
  if n == 0:
    break
  a = 0
  b = 0
  for i in range(n):
    x = list(map(int, input().split()))
    if x[0] == x[1]:
      continue
    elif x[0] > x[1]:
      a += 1
    else: b += 1
  print(a, b)

ledss = {
    1: 2,
    2: 5,
    3: 5,
    4: 4,
    5: 5,
    6: 6,
    7: 3,
    8: 7,
    9: 6,
    0: 6
}

for i in range(int(input())):
  leds = int()
  X = list(input())
  for b in range(len(X)):
    X[b] = int(X[b])

  for b in range(len(X)):
    leds += ledss[X[b]]
  
  print(leds,'leds')

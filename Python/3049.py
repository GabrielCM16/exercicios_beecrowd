#3049
b = int(input())
t = int(input())
h = 70

aTotal = 70 * 160 

if t > b:
  b, t = t, b


ma = aTotal - (((b + t) * h) /2)
fe = aTotal - ma

if fe > ma:
  print(1)
elif ma > fe:
  print(2)
else: print(0)

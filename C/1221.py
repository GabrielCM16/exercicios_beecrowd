n = int(input())

for i in range(n):
  x = int(input())
  b = 0
  for a in range(2,x):
    if x % a == 0:
        print(x,'Not Prime') 
        b = 1
        break

  if b == 0:
    print(x,'Prime')

    
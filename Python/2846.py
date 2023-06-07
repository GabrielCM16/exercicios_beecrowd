def fibo(k, a = 0,b = 1):
  i = 1
  fibonot = 0
  contFiboNot = 0
  while True:
    if contFiboNot == k:
      print(fibonot)
      break
    a, b = b, a + b
    i += 1
    if b > a + 1:
      for i in range(a + 1, b):
        if contFiboNot == k:
          break
        contFiboNot += 1
        fibonot = int(i)        
    else:
      continue
  

k = int(input())
fibo(k)

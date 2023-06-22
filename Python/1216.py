media = 0
a = 0
while True:
  try:
    nome = input()
    num = int(input())

    media += num
    a += 1
  except EOFError:
    media = media / a
    print(f'{media:.1f}') 
    break

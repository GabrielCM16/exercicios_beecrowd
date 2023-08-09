import re

def verifica(a,b):
  if re.match(f"^[0-9]*{b}",a):
    return True
  else: return False

for i in range(int(input())):
  a, b = input().split()

  if verifica(a,b):
    print('encaixa')
  else: print('nao encaixa')

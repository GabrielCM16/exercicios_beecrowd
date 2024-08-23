n = int(input())
copos = [0,0,0]
ini = input()

if ini == 'A': copos[0] = 1
elif ini == 'B': copos[1] = 1
else: copos[2] = 1

for i in range(n):
    jogada = input()
    if jogada == '1':
        copos[0], copos[1] = copos[1], copos[0]
    elif jogada == '2':
        copos[1], copos[2] = copos[2], copos[1]
    else:
        copos[0], copos[2] = copos[2], copos[0]
        
if copos[0] == 1: print('A')
elif copos[1] == 1: print('B')
else: print('C')
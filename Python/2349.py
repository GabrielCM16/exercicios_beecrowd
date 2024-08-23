n,c,s = input().split()

saida = 0
aux = 1

x = list(map(int, input().split()))

if aux == int(s):
    saida += 1

for i in x:
    aux += i
    
    if aux > int(n): aux = 1
    if aux == 0: aux = int(n)
    
    if aux == int(s):
        saida += 1
    
print(saida)

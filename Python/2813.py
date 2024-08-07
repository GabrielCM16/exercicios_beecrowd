casa = 0
escritorio = 0
cont = 0

for i in range(int(input())):
    x = input().split()
    
    if x[0] == 'chuva':
        cont -= 1
        if casa < -cont:
            casa = -cont
            
    if x[1] == 'chuva':
        cont += 1
        if escritorio < cont:
            escritorio = cont
            
print(casa, escritorio)
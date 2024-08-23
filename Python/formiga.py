a = input().split()
b = input().split()

valoresT = {}
valoresB = {}
for i in range(1, int(a[0]) + 1):
    valoresT[i] = int(b[i - 1])    
    valoresB[int(b[i - 1])] = i

grafoT = {}
grafoValores = {}
for i in range(int(a[1])):
    x,y = input().split()
    if int(x) not in grafoT:
        grafoT[int(x)] = []
    grafoT[int(x)].append(int(y))
    if int(y) not in grafoT:
        grafoT[int(y)] = []
    grafoT[int(y)].append(int(x))
    
    if int(x) not in grafoValores:
        grafoValores[int(x)] = []
    grafoValores[int(x)].append(valoresT[int(y)])
    if int(y) not in grafoValores:
        grafoValores[int(y)] = []
    grafoValores[int(y)].append(valoresT[int(x)])

pontos = 0
it = int(a[2])
parar = True

while parar:
    maior = None
    while maior == None:
        maior = max(grafoValores[it])
        if maior < valoresT[it]:
            pontos += 1
            it = valoresB[maior]
        else:
            if (len(grafoValores[it]) > 1):
                grafoValores[it].remove(maior)
                maior = None
            else:
                parar = False
                maior = 1
                break
    
print(pontos)
            
    
        
    
        


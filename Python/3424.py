x = int(input())
contador = 0
aux = False

entrada = input()

for i in range(len(entrada)-1):
    if entrada[i] == 'a' and entrada[i+1] == entrada[i]:
        contador+= 1
        aux = True
    elif aux:
        contador+= 1
        aux = False

if aux:
    contador+= 1
    
print(contador)
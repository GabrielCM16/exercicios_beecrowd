n = input()
x = list(map(int, input().split()))

xAUX = x.copy()

cont = 0
aux = x[0]

while len(x) > 0:
    print(x, "cont", cont, 'aux', aux)
    for i in xAUX:
        if aux == i + 1:
            print('s')
            x.remove(aux)
            aux = i - 1
            x.remove(i)
    cont += 1
    aux = x[0]
    xAUX = x.copy()
    
print(cont)
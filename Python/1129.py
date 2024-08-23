a = ['A', 'B', 'C', 'D', 'E']

while True:
    x = int(input())
    if x == 0:
        break

    for i in range(x):
        lista = list(map(int, input().split())) 

        aux = '*'

        for j in range(5):
            if aux == '*':
                if lista[j] <= 127:
                    aux = a[j]
            else:
                if lista[j] <= 127:
                    aux = '*'
                    break

        print(aux)





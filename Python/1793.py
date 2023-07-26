while True:
    x = int(input())
    if x == 0:
        break

    cont = 10
    lista = list(map(int, input().split()))

    for i in range(x - 1):
        a = lista[i]
        b = lista[i + 1]
        if (b - a) >= 10:
            cont += 10
        else:
            cont += (b - a)

    print(cont)
    
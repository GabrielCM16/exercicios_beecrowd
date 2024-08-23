while True:
    try:
        for _ in range(int(input())):
            tam = input()
            lista = list(map(int, input().split()))
            pulos = input()

            tiros = 0

            for i, j in zip(lista, pulos):
                if j == 'S' and i <= 2:
                    tiros += 1
                elif j == 'J' and i > 2:
                    tiros += 1
            
            print(tiros)
    except EOFError:
        break
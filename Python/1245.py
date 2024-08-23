while True:
    botas = dict()

    Nbotas = 0

    try:
        for _ in range(int(input())):
            tam, de = input().split()

            if not botas.get(tam):
                botas[tam] = []
                botas[tam].append(de) 
            else:
                botas[tam].append(de)   
                             
            aux = list(botas.get(tam))

            if 'D' in aux and 'E' in aux:
                Nbotas += 1
                aux.remove('D')
                aux.remove('E')
                botas[tam] = aux
           

        print(Nbotas)
    except EOFError:
        break
for i in range(int(input())):
    entrada = input()
    metade = int(len(entrada) / 2)

    parte1 = entrada[:metade]
    parte2 = entrada[metade:]

    novaParte1 = ""
    novaParte2 = ""

    for i in range(len(parte1) - 1, -1, -1):
        novaParte1 += parte1[i]
        novaParte2 += parte2[i]

    fraseCerta = novaParte1 + novaParte2

    print(fraseCerta)


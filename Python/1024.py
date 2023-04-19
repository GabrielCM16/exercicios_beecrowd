for i in range(int(input())):
    entrada = input()

    entradaprt1 = str()
    entradaprt2 = str()
    entradaprt3 = str()
    entradaprt33 = str()


    #parte 1
    for b in range(len(entrada)):
        char = entrada[b]
        if char.isalpha():
            orde = ord(char)
            entradaprt1 += chr(orde + 3)
        else: entradaprt1 += char

    #parte 2
    #invertendo a linha
    entradaprt2 =  entradaprt1[::-1]

    #parte 3
    # posicao -1 da ascii
    metade = len(entradaprt2) // 2

    for b in range(metade, len(entradaprt2)):
       char = entradaprt2[b]
       orde = ord(char)
       entradaprt3 += chr(orde - 1)
    
    entradaprt33 += entradaprt2[0:metade]
    entradaprt33 += entradaprt3

    print(entradaprt33)
    


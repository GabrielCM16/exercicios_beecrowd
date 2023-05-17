diametro = int(input())
lista = input().split()

if int(lista[0]) >= diametro and int(lista[1]) >= diametro and int(lista[2]) >= diametro:
    print('S')
else: print('N')

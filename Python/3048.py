cont = 0
lista = []

for i in range(int(input())):
    en = int(input())
    lista.append(en)

a = 0

for i in range(len(lista)):
    if a != lista[i]:
        cont += 1
    a = lista[i]


print(cont)

a1 = int(input())
a2 = int(input())
a3 = int(input())

possibilidade1 = a2 * 2 + a3 * 4
possibilidade2 = a1 * 2 + a3 * 2
possibilidade3 = a1 * 4 + a2 * 2

print(min(possibilidade1, possibilidade2, possibilidade3))

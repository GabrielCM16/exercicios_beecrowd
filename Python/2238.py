import math

A, B, C, D = map(int, input().split())

# Função para encontrar todos os divisores de um número
def encontrar_divisores(num):
    divisores = set()
    for i in range(1, int(math.sqrt(num)) + 1):
        if num % i == 0:
            divisores.add(i)
            divisores.add(num // i)
    return sorted(divisores)

# Encontrar todos os divisores de C
divisores_de_C = encontrar_divisores(C)

# Buscar o menor divisor que satisfaz todas as condições
menor_n = -1
for n in divisores_de_C:
    if n % A == 0 and n % B != 0 and D % n != 0:
        menor_n = n
        break

print(menor_n)

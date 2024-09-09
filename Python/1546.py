# Mapeamento das categorias para os responsáveis
responsaveis = {
    1: "Rolien",    # Elogios
    2: "Naej",      # Bugs
    3: "Elehcim",   # Dúvidas
    4: "Odranoel"   # Sugestões
}

# Número de casos de teste
N = int(input())

for _ in range(N):
    K = int(input())
    
    for _ in range(K):
        categoria = int(input())
        print(responsaveis[categoria])

# Implementação recursiva da LCS
def lcs_recursivo(X, Y, m, n):
    if m == 0 or n == 0:
        return 0
    elif X[m - 1] == Y[n - 1]:
        return 1 + lcs_recursivo(X, Y, m - 1, n - 1)
    else:
        return max(lcs_recursivo(X, Y, m, n - 1), lcs_recursivo(X, Y, m - 1, n))

# Implementação da LCS usando programação dinâmica
def lcs_dp(X, Y):
    m = len(X)
    n = len(Y)
    L = [[0] * (n + 1) for _ in range(m + 1)]

    for i in range(m + 1):
        for j in range(n + 1):
            if i == 0 or j == 0:
                L[i][j] = 0
            elif X[i - 1] == Y[j - 1]:
                L[i][j] = L[i - 1][j - 1] + 1
            else:
                L[i][j] = max(L[i - 1][j], L[i][j - 1])

    return L[m][n]

# Teste das implementações
X = "AGGTAB"
Y = "GXTXAYB"
print("Comprimento da LCS usando recursão:", lcs_recursivo(X, Y, len(X), len(Y)))
print("Comprimento da LCS usando programação dinâmica:", lcs_dp(X, Y))

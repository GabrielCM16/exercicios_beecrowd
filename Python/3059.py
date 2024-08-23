n, mi, ma = map(int, input().split())

x = list(map(int, input().split()))

soma = 0

for i in range(len(x)):
    if x[i] > ma:
        continue
    else:
        for j in range(i + 1, len(x)):
            if x[j] > ma:
                continue
            
            s = x[i] + x[j]
            if s >= mi and s <= ma:
                soma += 1                
                
print(soma)
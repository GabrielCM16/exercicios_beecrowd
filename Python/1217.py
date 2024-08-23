x = int(input())
valor = 0
qnt = 0
for i in range(x):
    valor += float(input())
    frutas = input().split()
    qnt += len(frutas)
    print(f"day {i+1}: {len(frutas)} kg")
    
print(f"{(qnt/x):.2f} kg by day")
print(f"R$ {(valor/x):.2f} by day")
    

menor = None 

for i in range(int(input())):
    x, y = map(float, input().split())
    
    calc = x * 1000 / y
    
    if menor is None or calc < menor:
        menor = calc
        
print(f'{menor:.2f}')
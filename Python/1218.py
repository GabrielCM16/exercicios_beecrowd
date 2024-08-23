n = 0
while True:
    try:
        x = input()
        pares = input()
        if n != 0:
            print()
        
        n += 1
        
        nM = pares.count(f"{x} M")
        nF = pares.count(f"{x} F")
        
        nX = pares.count(x)
        
        print(f'Caso {n}:')
        print(f"Pares Iguais: {nX}")
        print(f"F: {nF}")
        print(f"M: {nM}")
        
    
    except EOFError:
        break
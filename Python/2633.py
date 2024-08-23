while True:
    try:
        carnes = {}
        ns = []
        for i in range(int(input())):
            carne, n = input().split()
            carnes[int(n)] = carne
            ns.append(int(n))
            
        ns.sort()
            
        prints = []
            
        for j in ns:
            prints.append(carnes[j])
                
        print(' '.join(prints))
            
    except EOFError:
        break
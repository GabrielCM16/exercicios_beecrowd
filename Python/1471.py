while True:
    try:
        n, r = map(int, input().split())
        
        x = list(map(int, input().split()))
        
        y = list(range(1, n + 1))
        
        res = [str(item) for item in y if item not in x]
        
        if r == n:
            print("*")
        else:
            for i in res:
                print(i, end=" ")
            print()
    
    except EOFError:
        break
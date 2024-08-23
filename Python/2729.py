for i in range(int(input())):
    x = input().split()
    y = list(sorted(set(x)))
    print(' '.join(y))
    
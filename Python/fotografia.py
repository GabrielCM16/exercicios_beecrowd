x, y = map(int, input().split())

area = x * y

ul = [-1, None]

for i in range(1, int(input()) + 1):
    a1, a2 = map(int, input().split())
    
    if a1 >= x and a2 >= y:
        a = a1 * a2
        if ul[1] is None or a - area < ul[1]:
            ul[0] = i
            ul[1] = a - area
            
    if a1 >= y and a2 >= x:
        a = a1 * a2
        if ul[1] is None or a - area < ul[1]:
            ul[0] = i
            ul[1] = a - area

print(ul[0])

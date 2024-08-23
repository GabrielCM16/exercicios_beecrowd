x = list(map(int, input()))
x.append(int(input()))
x.append(int(input()))
x.append(int(input()))

m = max(x)
x.remove(m)
me = min(x)
x.remove(me)

print(abs((m + me) - sum(x)))
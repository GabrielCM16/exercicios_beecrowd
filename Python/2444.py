x = input().split()
y = input().split()
volume = int(x[0])
for i in y:
    if int(i) > 0:
        volume += int(i)
        if volume > 100:
            volume = 100
    else:
        if volume > 0:
            volume += int(i)
        if volume < 0:
            volume = 0
print(volume)
    

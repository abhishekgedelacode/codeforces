n = int(input())
j, s = 0, 0

for i in range(1, n+1):
    if i % 2 == 1:
        j = -1 * i
    else:
        j = i
    s += j

print(s)

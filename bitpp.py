x = 0
n = int(input())

for i in range(n):
    st = input()
    if st in ['X++', '++X']:
        x += 1
    elif st in ['X--', '--X']:
        x -= 1

print(x)

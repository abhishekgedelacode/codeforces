n = int(input())
count = 0

while n > 0:
    rem = n % 10
    if rem in [4, 7]:
        count += 1
    n = n//10

if count in [4, 7]:
    print("YES")
else:
    print("NO")

def gcd(a, b):
    if(b == 0):
        return a
    else:
        return gcd(b, a % b)


n = int(input())
lst = []

for i in range(n):
    lst.append(int(input()))


print(gcd(min(lst), max(lst)))

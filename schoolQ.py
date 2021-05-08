n = int(input())
t = int(input())
q = input()
l = len(q)
lst = q.split()

for i in range(t-1):
    ch = lst[0]
    for j in range(len(lst)-1):
        lst[j] = lst[j+1]
    lst[l-1] = ch

q = "".join(lst)

print(q.replace("BG", "GB"))

n = int(input())
t = int(input())
q = input()
l = len(q)
lst = q.split()

for i in range(t-1):
    lst[0], lst[l-1] = lst[l-1], lst[0]

q = "".join(lst)

print(q.replace("BG", "GB"))

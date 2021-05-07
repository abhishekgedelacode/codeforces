n, t = int(input()), int(input())
q = input()

for i in range(t):
    q[0], q[n-1] = q[n-1], q[0]

print(q.replace("BG", "GB"))

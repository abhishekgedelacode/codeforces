a = "I hate "
b = "I love "
c = "that "
d = "it"
word = ""

n = int(input())

for i in range(n):
    if i % 2 == 0:
        word += a
    else:
        word += b

    if i == n-1:
        word += d
    else:
        word += c

print(word)

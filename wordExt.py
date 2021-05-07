word = input()

l = 0
u = 0

for i in word:
    if i.islower():
        l += 1
    elif i.isupper():
        u += 1

if l > u:
    print(word.lower())
elif u > l:
    print(word.upper())
else:
    print(word.lower())

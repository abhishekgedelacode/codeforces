y = int(input())
flag = 0

while flag == 0:
    sum = 0
    lst = []
    y += 1
    year = y
    while year > 0:
        lst.append(year % 10)
        year //= 10
    for i in lst:
        sum += lst.count(i)
    if sum == 4:
        flag = 1

print(y)

name = input()
lst = []

for i in name:
    if not i in lst:
        lst.append(i)

if(len(lst) % 2 == 0):
    print("CHAT WITH HER!")
else:
    print("IGNORE HIM!")

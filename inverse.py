def InversionCount(arr):
    count = 0
    for j in arr:
        for k in arr:
            if j < k and arr[j] > arr[k]:
                count += 1
    return count


n = int(input())
arr = []

for i in range(n):
    arr.append(int(input()))

print(InversionCount(arr))

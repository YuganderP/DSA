arr = [2, 7, 11, 9]
i = 0
j = len(arr) - 1
while i < j:
    if arr[i] + arr[j] == 9:
        print(arr[i], arr[j])
        break
    elif arr[i] + arr[j] < 9:
        i += 1
    else:
        j -= 1

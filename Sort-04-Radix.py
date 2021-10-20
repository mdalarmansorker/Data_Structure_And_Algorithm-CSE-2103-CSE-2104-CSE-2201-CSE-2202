def counting_sort(arr, position):
    n = len(arr)
    temp = [0] * n
    c = [0] * 10

    for item in arr:
        digit = (item//position) % 10
        c[digit] += 1
    for i in range(1, 10):
        c[i] = c[i] + c[i-1]
    i = n-1
    for i in range(n-1,-1,-1):
        digit = (item//position) % 10
        temp[c[digit]-1] = arr[i]
        c[digit] -= 1
    arr[:] = temp[:]
    
    



def radix(arr):
    max_element = max(arr)
    position = 1
    while max_element // position > 0:
        counting_sort(arr, position)
        position = position * 10

arr = [3,6,9]
radix(arr)
print(arr)
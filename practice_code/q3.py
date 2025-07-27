def getSecondLargest(arr):
    largest = -1
    secondLargest = -1

    
    for num in arr:
        if num > largest:
            largest = num

    
    for num in arr:
        if num > secondLargest and num != largest:
            secondLargest = num

    return secondLargest


arr = [12, 35, 1, 10, 34, 1]
print(getSecondLargest(arr))

def insertElement(arr, x, pos):
    
    arr.insert(pos - 1, x)
    return arr

arr = [10, 20, 30, 40, 50]
x = 25
pos = 3

updated_arr = insertElement(arr, x, pos)
print(*updated_arr)

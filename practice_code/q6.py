def isSortedhelper(arr, n):

   
    if (n == 0 or n == 1):
        return True
        
    
    return (arr[n - 1] >= arr[n - 2] and isSortedhelper(arr, n - 1))
            
def isSorted(arr):
    
    n = len(arr)
    
    return isSortedhelper(arr, n)
    
if __name__ == "__main__":
    arr = [ 10, 20, 30, 40, 50 ]

    if (isSorted(arr)):
       print("true")
    else:
       print("false")
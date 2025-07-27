def reverseString(s):
    res = []
  
    
    for i in range(len(s) - 1, -1, -1):
        res.append(s[i])

   
    return ''.join(res)

if __name__ == "__main__":
    s = "abdcfe"
    print(reverseString(s))
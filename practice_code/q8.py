def isPalindrome(s):
    return s == s[::-1]


if __name__ == "__main__":
    s = "abba"

    if isPalindrome(s):
        print("Yes")
    else:
        print("No")

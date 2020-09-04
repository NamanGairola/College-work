def pal(s,n):
    check=0
    for i in range(0,int((n/2))):
        if(s[i]!=s[n-1-i]):
            check=1
            break
    if(check==0):
        print("String is palindrome")  
    else:
        print("String is not palindrome")
s=input("Enter string ")
n=len(s)
pal(s,n)

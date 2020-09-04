def check(str):
    n=0
    m=0
    for i in str:
        if(i.isupper()):
            n=n+1
        else:
            m=m+1
    print("Uppercase letters are ",n)
    print("Lowercase letters are ",m)
str=input("Enter string ")
check(str)
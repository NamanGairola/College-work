def pcount(n):
    count=0
    if(n>=2):
        count=1
    for i in range(3,n+1):
        check=0
        for j in range (2,i):
            if(i%j==0):
                check=1
                break
        if(check==0):
            count=count+1
    print("Number of prime are ",count)
n=int(input("Enter number "))
pcount(n)
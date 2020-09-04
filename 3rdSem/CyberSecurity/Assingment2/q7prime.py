def prime(n):
    print(n)
    j=0
    for i in n:
        check=0
        for k in range(2,i):
            if(i%k==0):
                check=1
                break
        if(i==2):
            check=0
        if(check==0):
            n[j]=(i,'Prime')
        else:
            n[j]=(i,'Non Prime')
        j=j+1
    print("List is ",n)
n=list(map(int,input("Enter numbers ").split()))
prime(n)

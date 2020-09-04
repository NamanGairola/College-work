def pdict(s):
    dict={}
    for i in s:
        check=0
        for k in range(2,i):
            if(i%k==0):
                check=1
                break
        if(i==2):
            check=0
        if(check==0):
            dict[i]='Prime'
        else:
            dict[i]='Non Prime'
    print("Dictionary is ",dict)
    count=0
    for i in s:
        check=0
        for k in range(2,i):
            if(i%k==0):
                check=1
                break
        if(i==2):
            check=0
        if(check==1):
            del dict[i]
            count=count+1
    print("Non prime number are ",count)
    print("After deleting non prime number dictionary is ",dict)

s=list(map(int,input("Enter numbers ").split()))
pdict(s)
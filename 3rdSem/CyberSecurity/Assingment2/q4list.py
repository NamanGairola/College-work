def unique(l,n):
    lu=[]
    lu.append(l[0])
    for i in range(1,n):
        k=0
        check=0
        for k in range(0,i):
            if(l[i]==l[k]):
                check=1
        if(check==0):
            lu.append(l[i])
    print("List is ",lu)

l=[]
n=int(input("Enter how many elemet are in list "))
i=0
print("Enter elements ")
for i in range(0,n):
    e=int(input())
    l.append(e)
unique(l,n)



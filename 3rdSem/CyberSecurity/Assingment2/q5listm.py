def multi(l,n,m):
    for i in range(0,n):
        l[i]=l[i]*m
    print("List is ",l)
l=[]
n=int(input("Enter how many elemet are in list "))
i=0
print("Enter elements ")
for i in range(0,n):
    e=int(input())
    l.append(e)
m=int(input("Enter number to be multiplied "))
multi(l,n,m)
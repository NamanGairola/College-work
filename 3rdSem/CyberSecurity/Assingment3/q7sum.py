l=list(map(int,input("Enter number ").split()))
n=len(l)
check=0
s=0
for i in range(0,n):
    if(check==0 and l[i]!=6):
        s=s+l[i]
    if(l[i]==6):
        check=1
    elif(l[i]==9):
        check=0 
print("Sum is ",s)      

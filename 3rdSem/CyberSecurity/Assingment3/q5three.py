l=list(map(int,input("Enter list of numbers ").split()))
check=0
i=0
n=len(l)
for i in range(0,l-1):
    if(l[i]==3 and l[i+1]==3):
        check=1
        break
if(check==1):
    print("True")
else:
    print("False")
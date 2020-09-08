l=list(map(int,input("Enter the numbers ").split()))
n=len(l)
check=0
for i in range(0,n-2):
    if(l[i]==0 and l[i+1]==0 and l[i+2]==7):
        check=1
        break
if(check==1):
    print("True")
else:
    print("False")
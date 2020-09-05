def fact(n):
    f=1
    for i in range(1,n+1):
        f=f*i
    return f
n=int(input("Enter number "))
for i in range(0,n):
    for j in range (0,i+1):
        a=int(fact(i)/(fact(i-j)*fact(j)))
        print(a,end=' ')
    print()
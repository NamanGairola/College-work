def range(x,y,n):
    if (n>=x and n<=y):
        print('It is in range')
    else:
        print('It is not in range')
x,y=input("Enter range ").split()
x=int(x)
y=int(y)
n=int(input("Enter number to check "))
range(x,y,n)
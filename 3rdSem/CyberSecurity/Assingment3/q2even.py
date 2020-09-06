def evod(x,y):
    if(x%2==0 and y%2==0):
        if(x<y):
            print("Lesser number is ",x)
        else:
            print("Lesser number is ",y)
    else:
        if(x>y):
            print("Greater number is ",x)
        else:
            print("Greater number is ",y)
x,y=map(int,input("Enter two numbers ").split())
evod(x,y)
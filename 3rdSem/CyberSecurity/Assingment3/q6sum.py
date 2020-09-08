print("Enter 3 numbers")
s=0
for i in range(0,3):
   n=int(input())
   if(n==11):
       n=1
   s=s+n
if(s>21):
    print("BUST")
else:
    print(s)

s=input("Enter sentence ")
s=s.split(" ")
n=len(s)
for i in range(0,n):
    s[i]="".join(list(reversed(s[i])))
s=" ".join(s)
print("After reversing words :\n",s)
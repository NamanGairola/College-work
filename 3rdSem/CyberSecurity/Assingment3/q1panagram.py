str=input()
str=str.lower()
s=list(set(str))
i=0
for j in s:
    if(ord(j)>=97 and ord(j)<=122):
        i=i+1
if(i==26):
    print("It is panagram")
else:
    print("It is not panagram")
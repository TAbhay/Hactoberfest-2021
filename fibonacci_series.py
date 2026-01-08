# 0,1,1,2,3,5,8,...
n=int(input("Enter the no. of terms:"))
a,b=0,1
c=0
i=1
while i<=n:
    if i<=n-1:
        print(a,",",end="")
    else:
        print(a,end="")
    c=a+b
    a=b
    b=c
    i+=1
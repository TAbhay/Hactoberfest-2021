#program to create a list where elements are enter by a user separated by comma then find sum of first and last
#number of the list using exception handling.

inp=input("enter a number")
lst=inp.split(",")
li=[]
for i in lst:
    li.append(int(i))
print("list is:",li)
try:
    sum=li[0]+li[len(li)-1]
    print(sum)
except TypeError:
    print("enter corerct operation")
except valueError:
    print("enter the correct type")
else:
    print("successfully executed")

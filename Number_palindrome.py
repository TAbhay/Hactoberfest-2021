n=int(input("Enter any number:"))                   #To store string of number
temp=n                                          #Taking temp variable to store value of n.
rev=0
while(n>0):                                     #condition
    dig=n%10                                    #to store reminder value in dig variable
    rev=rev*10+dig
    n=n//10
if(temp==rev):
    print("The number is a palindrome!")
else:
    print("The number isn't a palindrome!")

num=int(input("Enter a positive integer to be reversed: "))    #taking an integer input from the user
temp=num                                                         #storing the input in a temporary variable named temp
reverse=0
if num>0:
    while(temp>0):
        rem=temp%10
        reverse=reverse*10+(rem)
        temp=int(temp/10)
    print("Reverse of",num,"=",reverse)
else:
    print("Please enter a positive number!")

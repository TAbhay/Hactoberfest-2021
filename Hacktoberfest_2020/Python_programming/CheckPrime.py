
#Check wheter the number is prime or not.

num = int(input("Enter the number which you want to check for prime number = "))
count=0

for i in range(1, num+1):

    if num % i  == 0 :
        count=count+1

if count != 2:
        print(f'{num} is not prime')        
else:
            print(f"{num} is prime")
        
        
        
#Another way to check prime number

num = int(input("Enter the number which you want to check for prime number = "))
if num > 1:
    for i in range(1,num//1):
        if (num % i) == 0:
            print(num,"is not a prime number")
            break
            else:
                print(num, "is a prime number")
    


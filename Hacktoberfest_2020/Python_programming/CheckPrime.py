
#Check wheter the number is prime or not.
num = 13
count=0

for i in range(1, num+1):

    if num % i  == 0 :
        count=count+1

print(count)

if count != 2:
        print('Number is not prime')        
else:
            print("Number is prime")
        
        
        
#Another way to check prime number
num=13
if num > 1:
    for i in range(1,num//1):
        if (num % i) == 0:
            print(num,"is not a prime number")
            break
            else:
                print(num, "is a prime number")
    


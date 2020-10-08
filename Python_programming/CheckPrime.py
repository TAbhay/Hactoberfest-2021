
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
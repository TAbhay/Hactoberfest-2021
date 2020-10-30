num = int(input("Enter any number"))

# Changed num variable to string, 
# and calculated the length (number of digits)
val = len(str(num))

# initialize sum
sum = 0

# find the sum of the cube of each digit
temp = num                    #temp to store value of num
while (temp > 0):
   digit = temp % 10
   sum += digit ** val
   temp //= 10

#to show the output
if num == sum:
   print(num,"is an Armstrong number")
else:
   print(num,"is not an Armstrong number")

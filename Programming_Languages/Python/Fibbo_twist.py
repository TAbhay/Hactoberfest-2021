''' Take input the value of 'n', upto which you will print.
    Print the Fibonacci Series upto n while replacing prime numbers, all multiples of 5 by 0.'''

import math
def is_prime(num):
    if num <= 1:
        return False
    if num == 2:
        return True
    if num > 2 and num % 2 == 0:
        return False
 
    upto = math.floor(math.sqrt(n))
    for i in range(3, 1 + upto, 2):
        if num % i == 0:
            return False
    return True


n = int(input("enter a number: "))
sum = 0
a = 0
b = 1
count = 0
if n == 1:
  print(a)
else:
  while(count<=n):
    if not is_prime(a) and a % 5 != 0:
      print(a, end = ' ')
    else:
      print(0, end = ' ')
    sum = a + b
    a = b
    b = sum
    count += 1

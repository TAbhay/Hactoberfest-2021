string=input('enter string')
reversed=""
for i in range(len(string)-1,0-1,-1):
    reversed+=string[i]
if(reversed==string):
  print("palindrome")
else:
  print("not palindrome")

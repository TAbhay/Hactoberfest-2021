# function to reverse a given string in python
# using loop

def revstr(s):                                    # defining a function r
  str = ""                                        # taking an empty string to store reversed string
  for i in s:                                     # calling loop on the given input string 
	  str = i + str                                 # storing the given string one by one in empty string thus the order gets reversed
  return str                                      # returning the reversed string for the function

s = input("Enter a string to reverse: ")          # asking for input string

print ("The original string is :",s,end=" ")      # Printing the original given string 


print ("\nThe reversed string is :",revstr(s),end=" ") # printing the reversed string 

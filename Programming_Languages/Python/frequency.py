input_string = input("Enter string: ") 
def freq():
 frequencies = {} 
 for char in input_string: 
   if char in frequencies: 
      frequencies[char] += 1
   else: 
      frequencies[char] = 1
 print("Per char frequency in '{}' is :\n {}".format(input_string, str(frequencies)))
freq()

x = input("enter number 1:")
y = input("enter number 2 :")

try :
	z = int(x)/int(y)

except ValueError as e:
	print("Exception occured vallue error")
	z = None

except Exception as e:
	print(type(e).__name__)
	z = None
	
print("num1/num2 is : ",z)

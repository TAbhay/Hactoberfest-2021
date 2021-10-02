# Searching an element in a list/array in python
# can be simply done using \'in\' operator
# Example:
# if x in arr:
#   print arr.index(x)
  
# If you want to implement Linear Search in python
  
# Linearly search x in arr[]
# If x is present then return its location
# else return -1
  
def search(arr, x):
  
    for i in range(len(arr)):
  
        if arr[i] == x:
            return i
  
    return -1

#Lets take a list for Example:    

Ages = [5, 13 ,19 , 25,37]


result = search(Ages,25) #Searching the key 25 

if result == -1 :
    print("Element is not present in the list")

else:
    print("Element is Present at index= ",result)


def insertionSort(arr):
  
    for i in range(1, len(a)):
  
        key = a[i]
  
        j = i-1
        while j >=0 and key < a[j] :
                a[j+1] = a[j]
                j -= 1
        a[j+1] = key
  

a=[]
print("No. of elements in the list")
k=int(input())
print("Enter the elements")
for i in range(k):
    g=int(input())
    a.append(g)

insertionSort(a)
print ("Sorted array is:")
for i in range(len(a)):
    print ("%d" %a[i])

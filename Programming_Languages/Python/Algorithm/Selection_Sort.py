def Selection_Sort (arr):
    for i in range(len(arr)-1):
        min,pos = arr[i],i
        for j in range(i+1,len(arr)):
            if arr[j]<min:
                min,pos = arr[j],j
        if min!=arr[i]:
            arr[i],arr[pos]=arr[pos],arr[i]
    print(arr)

# Custom Array input
# arr = list(map(int,input('Enter numbers : ').split()))
arr = [23, 89, 45, 20, 15, 90, 49, 60, 30, 95]
Selection_Sort(arr) 
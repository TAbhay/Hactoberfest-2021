def Bubble_Sort(arr):
    for i in range(len(arr)-1):
        for j in range(len(arr)-i-1):
            if arr[j]>arr[j+1]:
                arr[j],arr[j+1]=arr[j+1],arr[j]
    print(arr)

# Custom Array input
# arr = list(map(int,input('Enter numbers : ').split()))
arr = [23, 89, 45, 20, 15, 90, 49, 60, 30, 95]
Bubble_Sort(arr)
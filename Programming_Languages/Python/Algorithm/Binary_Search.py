def Binary_Search(arr, target):
    f,l=0,len(arr)-1
    while True:
        mid=(f+l)//2
        if f>l:
            break
        elif target==arr[mid]:
            return True
        elif target<arr[mid]:
            l=mid-1
        else:
            f=mid+1
    return False

arr,target = (2, 6, 12, 14, 19, 29, 39, 56, 90, 100),int(input("Enter Target to be searched : "))
# Custom Array input
# arr,target = list(map(int,input('Enter numbers : ').split())),int(input("Enter Target to be searched : "))
Conclusion = Binary_Search(arr, target)
print("Element Found") if Conclusion==True else print("Element Not Found")
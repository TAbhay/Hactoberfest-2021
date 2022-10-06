def Linear_Search(arr, target):
    for i in arr:
        if target==i:
            return True
    return False

arr,target = (2, 25, 29, 92, 39, 90, 3, 10, 79, 57),int(input("Enter Target to be searched : "))
# Custom Array input
# arr,target = list(map(int,input('Enter numbers : ').split())),int(input("Enter Target to be searched : "))
Conclusion = Linear_Search(arr, target)
print("Element Found") if Conclusion==True else print("Element Not Found")
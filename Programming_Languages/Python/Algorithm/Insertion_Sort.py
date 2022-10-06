def Insertion_sort(arr,n):
    curr,prev=0,0
    while True:
        if curr==n: #2 4
            break
        else:
            if arr[curr]>arr[curr+1]:#13 5
                arr[curr],arr[curr+1]=arr[curr+1],arr[curr]
                prev=curr
                curr+=1
                while prev>0 and arr[prev]<arr[prev-1]:
                    arr[prev],arr[prev-1]=arr[prev-1],arr[prev]
                    prev-=1
            else:
                curr+=1
    print(arr)

# Custom Array input
# arr = list(map(int,input('Enter numbers : ').split()))
arr = [23, 89, 45, 20, 15, 90, 49, 60, 30, 95]
Insertion_sort(arr,len(arr)-1)
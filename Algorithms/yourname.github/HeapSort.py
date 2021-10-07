
"""
                                   Heap Sort
It is one of the efficient sorting algorithm based on heap data structure in O(nlogn).
Here the given array to be sorted is assumed to be a heap.So for ith index
The left child will become the element present at the 2*i+1 index in the array.
The right child will become the element present at the 2*i+2  index in the array.
Parent of the ith index will be element present at (i-1)/2 index in the array.
There are 2 major operations which are responsible for maintaining the heap Heapify:
->This operation sets the order of values between the parent and its child
->If we are dealing with the max heap, it will find the index having max value among the node and its children
->If the index holding max value is not the parent, it will wap the parent with the child having the max value
"""

def heapify(arr, n, i):
    largest = i  # Initialize largest as root
    l = 2 * i + 1     # left = 2*i + 1
    r = 2 * i + 2     # right = 2*i + 2

    # See if left child of root exists and is
    # greater than root
    if l < n and arr[i] < arr[l]:
        largest = l

    # See if right child of root exists and is
    # greater than root
    if r < n and arr[largest] < arr[r]:
        largest = r

    # Change root, if needed
    if largest != i:
        arr[i],arr[largest] = arr[largest],arr[i]  # 


        heapify(arr, n, largest)

def heapSort(arr):
    n = len(arr)


    for i in range(n // 2 - 1, -1, -1):
        heapify(arr, n, i)


    for i in range(n-1, 0, -1):
        arr[i], arr[0] = arr[0], arr[i]   
        heapify(arr, i, 0)

# Driver code to test above

if __name__ == "__main__":
    arr = [eval(x) for x in input("Enter the array: ").split()]
    heapSort(arr)
    print(arr)
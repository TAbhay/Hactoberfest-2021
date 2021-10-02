# Function to calculate the minimum
# number of elements to be removed
# satisfying the conditions
def minimumDeletions(arr, N):
    # Stores the final answer
    ans = 0
 
    # Map to store frequency
    # of each element
    mp = {}
 
    # Traverse the array arr[]
    for i in arr:
        mp[i] =  mp.get(i,0)+1
 
    # Traverse the array arr[]
    for i in range(N):
        # Stores whether current
        # element needs to be
        # removed or not
        flag = 0
 
        # Iterate over the range
        # [0, 30]
        for j in range(31):
            # Stores 2^j
            pw = (1 << j)
 
            # If 2^j -arr[i] equals
            # to the arr[i]
            if i >= len(arr):
                break
 
            if (pw - arr[i] == arr[i]):
 
                # If count of arr[i]
                # is greater than 1
                if (mp[arr[i]] > 1):
                    flag = 1
                    break
            # Else if count of 2^j-arr[i]
            # is greater than 0
            elif (((pw - arr[i]) in mp) and mp[pw - arr[i]] > 0):
                flag = 1
                break
 
        # If flag is 0
        if (flag == 0):
            ans += 1
    # Return ans
    return -1 if ans == N else ans
   
# Driver Code
if __name__ == '__main__':
 
    arr= [1, 2, 3, 4, 5, 6]
    N = len(arr)
 
    print (minimumDeletions(arr, N))
 
    arr1= [1, 5, 10, 25, 50]
    N = len(arr)
    print (minimumDeletions(arr1, N))

#Contributed by Akash Srivastava
# Function that takes in two arrays and returns the difference between them, which is the value that is not common to both arrays. 
# Example output: arrayDiff([9, 3, 2, 1], [2, 3]) ==> [9, 1]

def array_diff(a, b):
    output = [i for i in a if i not in b]
    return output

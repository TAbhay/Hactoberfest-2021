'''
Function to find mean of a list / iterator
'''

def mean(arr: list) -> float:
    '''
    Finds mean of an array
    input: array (type: list)
    output: float (mean of the array)
    '''
    if len(arr) == 0:
        return 0
    return sum(arr) / len(arr)

print("Hello To my first program")
l1 = [1, 2, 3, 4, 5]
print(mean(l1))
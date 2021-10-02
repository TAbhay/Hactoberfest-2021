"""
Given the list of numbers, you are to sort them in non decreasing order.

Input
t – the number of numbers in list, then t lines follow [t <= 10^6].
Each line contains one integer: N [0 <= N <= 10^6]

Output
Output given numbers in non decreasing order.

"""
t=int(input())
l=[]
for i in range(t):
    l.append(int(input()))
l.sort()
print(*l,sep='\n')

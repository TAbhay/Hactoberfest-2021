#Solution for "Number Line Jumps" 
#Link: https://www.hackerrank.com/challenges/kangaroo/problem?isFullScreen=true
#Problem Solving-> Algorithms-> Data Structures
#Code by Sanober494


def kangaroo(x1, v1, x2, v2):
    
    if (x1 < x2 and v1 <= v2) or (x2 < x1 and v2 <= v1):
        print("NO")
        return

    
    if (x1 - x2) % (v2 - v1) == 0:
        print("YES")
    else:
        print("NO")


num = input()
newNum = list(map(int, num.split()))

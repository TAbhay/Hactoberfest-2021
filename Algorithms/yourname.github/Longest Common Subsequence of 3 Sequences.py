>>
import numpy

def LCS3(s1, s2, s3, n1, n2, n3): 
    Matrix = numpy.zeros((n1+1 , n2+1, n3+1))

    for i in range(1, n1+1):
        for j in range(1, n2+1):
            for k in range(1, n3+1):
                if s1[i-1] == s2[j-1] == s3[k-1]:
                    Matrix[i][j][k] = Matrix[i-1][j-1][k-1] + 1
                else:
                    Matrix[i][j][k] = max(Matrix[i-1][j][k], Matrix[i][j-1][k], Matrix[i][j][k-1])
    
    return int(Matrix[-1][-1][-1])


n=int(input()) 
str1=input().split()

n1=int(input())
str2=input().split()

n2=int(input())
str3=input().split()
print(LCS3(str1,str2,str3,n,n1,n2))



@ CODED BY TSG405, 2021

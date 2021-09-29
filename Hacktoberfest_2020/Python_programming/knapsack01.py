'''
'''
def knapSack(capacity,weight,profit,num):
    global K
    for i in range(num + 1):
        for j in range(capacity + 1):
            if i == 0 or j == 0:
                K[i][j] = 0
            elif weight[i-1] <= j:
                K[i][j] = max(profit[i-1] + K[i-1][j-weight[i-1]],  K[i-1][j])
                
            else:
                K[i][j] = K[i-1][j]

  
    return K[num][capacity]

profit =list(map(int,input('profit (value) : ').split(',')))
weight = list(map(int,input('respective weights : ').split(',')))
capacity = int(input('capacity : '))
num = len(profit)
K = [[0 for x in range(capacity + 1)] for x in range(num + 1)]

max_profit=knapSack(capacity,weight,profit,num)
print('__________________________________________\n\nMaximum profit that can be obtained is',max_profit)
print('Items contributed for maximum profit are:',end=" ")
j=len(K)
contributors=[0]*num
while(j>=0):
    
    if max_profit in K[j-2]:
        j-=1
    else:
        contributors[j-2]=1
        print("~ item ",j-1,end=" ")
        max_profit-=profit[j-2]
        j-=1

    
print("\nTherefore,Contributors list is ",contributors)
'''
 10,5,15,7,6,18,3
 2,3,5,7,1,4,1
 15
'''
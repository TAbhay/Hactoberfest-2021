n=int(input("enter number of processes in the queue :"))
head=int(input("enter the position of head currently:"))
loR=int(input("head moving towards left [0] or right [1]:"))
pr=[]
seekTime=0
order=[]
print("enter the positions of the processes in order :")
for i in range(n):
	value=int(input())
	pr.append(value)
pr.sort()
#print(pr)
temp=0
index=0
if(loR==0):
	for i in range(n):
		if(pr[i]<head and pr[i]>temp):
			#temp=pr[i]
			index=i
			#print(index)
	#print(index)
	#print(pr[index])
	temp=index
	order.append(pr[temp])
	seekTime+=abs(pr[temp]-head)
	#print(seekTime)
	temp-=1
	while(temp>=0):
		order.append(pr[temp])
		seekTime+=abs(pr[temp]-pr[temp+1])
		#print(seekTime)
		temp-=1
		#print(temp)
	
	order.append(0)
	seekTime+=abs(pr[0]-0)
	order.append(199)
	seekTime+=abs(199-0)
	#print(seekTime)
	#print(pr[temp]-0)
	#print(seekTime)
	temp=n-1
	order.append(pr[temp])
	seekTime+=abs(pr[temp]-199)
	#print(seekTime)
	temp-=1
	while(temp>index):
		order.append(pr[temp])
		seekTime+=abs(pr[temp]-pr[temp+1])
		#print(seekTime)
		temp-=1
	print("seek Time = ",seekTime)
	print("order of scheduling :\n")
	print(head," ->",end=" ")
	for i in order:
		print(i," ->",end=" ")
	print("end\n")
else:
	temp=1000
	for i in range(n):
		if(pr[i]>head and pr[i]<temp):
			temp=pr[i]
			index=i
	temp=index
	order.append(pr[temp])
	seekTime+=abs(pr[temp]-head)
	temp+=1
	while(temp<n):
		order.append(pr[temp])
		seekTime+=abs(pr[temp]-pr[temp-1])
		temp+=1
	order.append(199)
	seekTime+=abs(pr[n-1]-199)
	order.append(0)
	seekTime+=abs(199-0)
	temp=0
	order.append(pr[temp])
	seekTime+=abs(pr[temp]-0)
	temp+=1
	while(temp<index):
		order.append(pr[temp])
		seekTime+=abs(pr[temp]-pr[temp-1])
		temp+=1
	print("seek Time = ",seekTime)
	print("order of scheduling :\n")
	print(head," ->",end=" ")
	for i in order:
		print(i," ->",end=" ")
	print("end\n")

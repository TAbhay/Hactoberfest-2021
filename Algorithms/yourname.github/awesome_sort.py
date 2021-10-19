# -*- coding: utf-8 -*-
"""
Created on Mon Jun 14 22:35:27 2021

@author: subham
"""
def awesome_sort(arr,n):
    arr_not5=[]
    arr_5=[]
    arr_odd=[]
    
    for i in arr:
        if(i%2==0 and i%5==0):
            arr_5.append(i)
        elif(i%2==0 and i%5!=0):
            arr_not5.append(i)
        elif(i%2!=0):
            arr_odd.append(i)
    print(arr_5)
    print(arr_not5)
    print(arr_odd)
    
    arr_5.sort(reverse=True)
    arr_not5.reverse()
    
    return  arr_5+arr_not5+arr_odd
    
T=int(input("Enter no. of test cases"))   

t=0
while(t<T):
    n=int(input("Enter the no. of elements: "))
    arr=[]
    final=[]
    for i in range(0,n):
        z=int((input()))
        arr.append(z)    
    final=awesome_sort(arr,n)
    print("AWESOME ARRAY IS:")
    print(final)
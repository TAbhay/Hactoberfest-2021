#include <stdio.h>
#include <math.h>
#define MAXVALUE 30
int jump_search(int a[], int low, int high, int val, int n)
{
int step, i;
step = n;
for(i=0; i<step; i++)
{
if(val < a[step])
high = step - 1;
else
low = step + 1;
}
for(i=low; i<=high; i++)
{
if(a[i] == val)
return i;
}
return -1;
}
int main()
{
int arry[MAXVALUE], i, n, val, pos;
printf("\n Enter the size of the array : ");
scanf("%d", &n);
printf("\n Enter %d elements in the array : \n",n);
for(i=0; i<n; i++)
scanf("%d",&arry[i]);
printf("\n Enter the key element that has to be search : ");
scanf("%d", &val);
pos = jump_search(arry, 0, n-1,val, n);
if(pos == -1)
printf("\n %d is not found in the array ", val);
else
printf("\n %d is found at position arry [%d]", val,pos);
return 0;
}

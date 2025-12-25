#include<stdio.h>
int main()
{
  int n,key,i;
  int a[n];
  printf("Enter n\n");
  scanf("%d",&n);
  printf("Enter the array values\n");
  for (i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("Enter the value to be searched:");
  scanf("%d",&key);
  for (i=0;i<n;i++)
  {
    if(a[i]==key)
    {
      printf("index of key is %d",i);
      break;
    }
  }
  return 0;
}

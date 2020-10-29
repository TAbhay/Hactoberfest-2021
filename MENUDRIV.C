#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],ch,i,e,flag=0,k,j,n=5,m,l,q,b[10],s,c[10],p[5],d[5],u,v,z;
clrscr();
x:
printf("1.Creation of an array\n");
printf("2.Deletion of an element from array\n");
printf("3.Insertion of an element in the array\n");
printf("4.Searching of an element from the array\n");
printf("5.Displaying the contents of the array\n");
printf("6.Reversing an array\n");
printf("7.Merging two sorted arrays\n");
printf("Enter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("Enter the elements in the array:\n");
for(i=0;i<n;i++)
{scanf("%d",&a[i]);
}
break;
case 2:
printf("From which position you want to delete the element:");
scanf("%d",&l);
for(q=l;q<n-1;q++)
{a[q]=a[q+1];
}
n=5;
n=n-1;
break;
case 3:
printf("\n In which position you want to store the number:");
scanf("%d",&j);
printf("Which number you want to store:");
scanf("%d",&m);
for(n=5;n>j;n--)
{a[n+1]=a[n];
}
a[j]=m;
n=5;
n=n+1;
for(i=0;i<n;i++)
{printf(" %d ",a[i]);
}
break;
case 4:
printf("Enter the element you want to search:");
scanf("%d",&e);
for(i=0;i<n;i++)
{if(e==a[i])
 {flag=1;
  break;
  }
  else
  flag=0;
 }
 if(flag==1)
 printf("The element is present\n");
 else
 printf("The element is not present\n");

break;
case 5:
printf("The elements of the array are:\n");
for(i=0;i<n;i++)
{printf(" %d ",a[i]);
}
break;
case 6:
for(i=n-1,s=0;n>=0,s<=n-1;i--,s++)
 {b[s]=a[i];
}
for(s=0;s<=n-1;s++)
{printf(" %d ",b[s]);
}
break;
case 7:
printf("Enter the number of elements in the first array:");
scanf("%d",&u);
printf("Enter the elements in first array:");
for(i=1;i<=u;i++)
{scanf("%d",&p[i]);
}
printf("Enter the number of elements in the second array:");
scanf("%d",&v);
printf("Enter the elements in second array:\n");
for(j=1;j<=v;j++)
{scanf("%d",&d[j]);
}
i=1,j=1,z=1;
while(i<=u&&j<=v)
{if(p[i]<d[j])
{
 c[z]=p[i];
 z=z+1;
 i=i+1;
 }
 else
 {c[z]=d[j];
 z=z+1;
 j=j+1;
 }
 }
for(;i<=u;i++)
{c[z++]=p[i];
 }
for(;j<=v;j++)
{c[z++]=d[j];
 }
 printf("The array is:\n");
 for(i=1;i<=(u+v);i++)
 {printf("%d\n",c[i]);
 }
break;
default:
printf("Wrong choice");
}

printf("\nIf you want to continue press 1 else press 2:");
scanf("%d",&k);

if(k==1)
{  goto x;

   }
   else

{ printf("Thank you");
 }
getch();
}
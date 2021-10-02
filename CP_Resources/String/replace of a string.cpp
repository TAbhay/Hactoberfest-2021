#include<stdio.h>
#include<string.h>
int main()
{
    int i,j=0,k,flag=0,l=0,m,n=0;
    char st[100],up[100],su[100],re[100],fl[100];
    printf("enter a sentence :- ");
    gets(st);
    printf("\nenter the string to search :-");
    gets(up);
    printf("\nenter the string to update:-");
    gets(re);
    while(st[l]!='\0')
    {k=0;
    m=0;
    for(i=0+l;i<strlen(up)+l;i++)
    {su[k]=st[i];
    k++;
    }
    su[k]='\0';
    if((strcmp(su,up)==0)&&((st[i]==32)||(st[i]=='\0')))
    {flag=1;
    j++;
    l=l+strlen(up)-1;
    for(k=l-1;k<l+strlen(re)-1;k++)
       {
        fl[n++]=re[m++];
              }
    }
    else
        fl[n++]=st[l];

    l++;
    }
    fl[n]='\0';
    if(flag!=0)
    {printf("\nThe string after modification :-\n");
    puts(fl);
    printf("\nthe occurance of the string in the string is %d times \n",j);
    }
    if(flag==0)
    {
        printf("\nthe searched string is not found");
    }
    return 0;
}


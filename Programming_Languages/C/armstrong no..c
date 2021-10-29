 #include<conio.h>
 #include<stdio.h>
 #include<math.h>
 int main()
 {
     int n=0,a,b=0,c,d,p;
     printf("enter any no. to ch eck");
     scanf("%d",&a);
     d=a;
     while(d!=0)
     {
         d=d/10;
         ++n;
     }
     d=a;
     while(d!=0)
     {
         c=d%10;
         p=round(pow(c,n));
         b=b+p;
         d=d/10;
     }
     if(a==b)
     {
         printf("%d is a  armstrong no.",a);
     }
     else{
        printf("%d no. is not a armstrong no.",a);

     }

     getch();
 }

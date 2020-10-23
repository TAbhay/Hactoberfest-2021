#include<stdio.h>
main()
{
	int age;
	char num[10];
	printf("ENTER YOUR NAME:\t");
	char a[50];
	scanf("%s",&a);
	printf("ENTER YOUR AGE:\t");
	scanf("%d",&age);
	printf("ENTER YOUR PHONE NUMBER:\t");
	scanf("%s",&num);
	printf("------------------------------------------\n  DETAILS ARE :\n");
	printf("YOUR NAME IS :\t%s\nYOUR AGE IS :\t%d\nYOUR PHONE NUMBER IS :\t%s",a,age,num);
	
}

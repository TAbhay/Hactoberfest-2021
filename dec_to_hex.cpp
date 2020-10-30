//Converter from decimal to hexadecimal.
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i=0,num,digit[1000];
	cout<<"\nenter any no.\n";
	cin>>num;
	while(num>0)			// Converting decimal to hexadecimal in reverse order and storing in digit array with while loop.
	{
		digit[i]=num%16;
		num=num/16;
		i++;
	}
	do				//Printing respective number according to their numeral values.
	{
		i--;
		if(digit[i]>=0&&digit[i]<=9)
		{
			cout<<digit[i];
		}
		else if(digit[i]==10)
		{
			cout<<'A';
		}
		else if(digit[i]==11)
		{
			cout<<'B';
		}
		else if(digit[i]==12)
		{
			cout<<'C';
		}
		else if(digit[i]==13)
		{
			cout<<'D';
		}
		else if(digit[i]==14)
		{
			cout<<'E';
		}
		else if(digit[i]==15)
		{
			cout<<'F';
		}
	}while(i>=0);
	getch();
}
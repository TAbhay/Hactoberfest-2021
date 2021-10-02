#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
//char a[3][3]={1,2,3,4,5,6,7,8,9};
//char a[3][3]={'1','2','3','4','5','6','7','8','9'};
char a[3][3]={' ',' ',' ',' ',' ',' ',' ',' ',' '};


int i,j,k,l,o,p;
char symb_of_player,symb_of_comp;
int posp,posc;

print_tictack(char d[3][3])
{int s=1;
for(i=0;i<3;i++)
{for(j=0;j<3;j++)
{printf("_%c_",a[i][j]);
printf("|");
}
printf("\n");
}


}
enter_choice(char s)
{posp=0;
int k=0;
printf("\nenter position from 1 to 9 to place your symbol\n");
scanf("%d",&posp);
for(int i=0;i<3;i++)
{	for(int j=0;j<3;j++)
{
k++;
if(k==posp)
//a[i][j]=symb_of_player;
a[i][j]=s;
}

}}
choice_of_comp()
{posc=(rand()%10)+1;
int k=0;
if(symb_of_player=='o')
symb_of_comp='x';
else
symb_of_comp='o';

for(int i=0;i<3;i++)
{	for(int j=0;j<3;j++)
{
k++;
if(k==posc)
a[i][j]=symb_of_comp;
}


}}
 int check_patterns(char symb)
{
	int flag=0,fr=0,fc=0,fd1=0,fd2=0;
	for(int i=0;i<3;i++)
	{ fr=0,fc=0;
	for(int j=0;j<3;j++)
	{if(a[i][j]==symb)
	fr++;}
	if(a[i][i]==symb)
	fd1++;
	

	for(int k=0;k<3;k++)
	{if(a[k][i]==symb)
		{
	fc++;}}
	if(a[i][3-i]==symb)
	fd2++;

	
	if(fc==3)
	{
	flag=fc;
	break;}
	if(fr==3){

	flag=fr;
	break;}
	if(fd1==3)
	{
	flag=fd1;
	break;}
	if(fd2==3)
	{
	flag=fd2;
	break;}
	 
	}
	return flag;

}


decide_winner()
{int k=0,wc=0,wp=0;
while(k<9)
{printf("your turn\n");
enter_choice(symb_of_player);
print_tictack(a);
wp=check_patterns(symb_of_player);
if(wp==3)
{
printf("you win");
break;
}
printf("computer/user 2 turn\n");
//choice_of_comp();
enter_choice(symb_of_comp);
print_tictack(a);
wc=check_patterns(symb_of_comp);
if(wc==3)
{
printf("computer/user 2 win");
break;
}

k++;
}
}




main()
{



print_tictack(a);
printf("choose your symbol :'o' or 'x'\n");


scanf("%c",&symb_of_player);
if(symb_of_player=='o')
symb_of_comp='x';
else
symb_of_comp='o';

decide_winner();


}

#include<iostream.h>
#include<conio.h>
#include<string.h>
class Stack
{
int stk[50];
int top;
public:
stack()
{
top=-1;
}
void push(int x)
{
if(top>49)
return;
stk[++top]=x;
}
void pop()
{
if(top<0)
return;
top--;
}
char peek()
{
return stk[top];
}
int isEmpty()
{
if(top==-1)return 1;
}
};
int getWeight(char ch)
{
switch(ch)
{
case '/':
case '*':
	 return 2;
case '+':
case '-':
	 return 1;
default:
	return 0;
}
}
void infixpostfix(char s[],char ns[])
{
Stack st;
st.push('N');
int l=strlen(s);
int k=0;
for(int i=0;i<l;i++)
{
if((s[i]>='a'&& s[i]<='z')||(s[i]>='A'&& s[i]<='Z'))
{
 ns[k]=s[i];
 k++;
}
else if(s[i]=='(')
       st.push('(');
else if(s[i]==')')
{
while(st.peek()!='N'&& st.peek()!='(')
{
char c=st.peek();
st.pop();
ns[k]=c;
k++;
}
if(st.peek()=='(')
{char c=st.peek();
st.pop();}
}
else
{
while(st.peek()!='N' && getWeight(s[i]<= getWeight(st.peek()))
{
char c=st.peek();
st.pop();
ns[k]=c;
k++;
}
st.push(s[i]);
}
}
while(st.peek()!='N')
{
char c=st.peek();
st.pop();
ns[k]=c;
k++;
}
cout<<ns;
}
void infixToPrefix(char s[],int l)
{
int i,k;
char rinfix[50].ns[50];
//Reverse infix
for(i=l-1,k=0;i>0;i--,k++)
{
rinfix[k]=s[i];
}
//Convert it to postfix
char post[50];
infixToPostfix(rimfix,post);
//Reverse Postfix to get Prefix
for(i=-1;i>0;i--)
{
cout<<post[i];
}

}
void main()
{
	clrscr();
	char infix[]="A+B";
	int s=strlen(infix);
	char postfix[50];
	cout<<"Infix Expression:"<<infix;
	cout<<"\nPostfix Expression:";
	infixpostfix(infix,postfix);
	for(int i=0; i<s;i++)
	{
	cout<<"prefix expression:";
	}
	infixtoprefix(infix,s);
	getch();
}
}

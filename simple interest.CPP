#include<iostream.h>
#include<conio.h>
class simple
{private:douuble p,t,r,si;
 public:void input()
 {cout<<"enter principle amount,time and rate of interest";
  cin>>p>>t>>r;
 }
 void compute()
 {si=(p*t*r)/100;
 }
 void output()
 {cout<<"simple interest="<<si;
 }
};
void main()
{simple I;
 clrscr();
 I.input();
 I.compute();
 I.output();
 getch();
}

#include<iostream>
using namespace std;

int main()
{
    int a=55, b=105;
    cout<<"Operators in C++"<<endl;
    cout<<"Types of Oprators"<<endl;

    //Arithmetic Operators
    cout<<"The value of a + b Is "<<a+b<<endl;
    cout<<"The value of a - b is "<<a-b<<endl;
    cout<<"The value of a * b is "<<a*b<<endl;
    cout<<"The value of a / b is "<<a/b<<endl;
    cout<<"The value of a % b is "<<a%b<<endl;
    cout<<"The value of a++ is "<<a++<<endl;
    cout<<"The value of a-- is "<<a--<<endl;
    cout<<"The vslue of ++a is "<<++a<<endl;
    cout<<"The value of --a is "<<--a<<endl;
    cout<<endl;
    

    //Comparison Operators
    cout<<"The value of a == b is "<<(a==b)<<endl;
    cout<<"The Value of a != b is "<<(a!=b)<<endl;
    cout<<"The Value of a >= b is "<<(a>=b)<<endl;
    cout<<"The Value of a <= b is "<<(a<=b)<<endl;
    cout<<"The Value of a > b is "<<(a>b)<<endl;
    cout<<"The Value of a < b is "<<(a<b)<<endl;
    cout<<endl;

    //Logical Operators
    cout<<"The Value of Logical AND Operator ((a==b)) && ((a<b)) is "<<((a==b)&&(a<b))<<endl;
    cout<<"The value of Logical OR Operator ((a==b)) || ((a<b)) is "<<((a==b)||(a<b))<<endl;
    cout<<"The Value of Logical NOT operator (!(a==b)) is "<<(!(a==b))<<endl;



    return 0;
}
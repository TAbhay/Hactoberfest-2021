#include <bits/stdc++.h>
using namespace std;
// Forward Decelartion.
class Complex;
class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumRealComplex(Complex , Complex);
    int sumCompComplex(Complex,Complex);
};

class Complex
{
    int a;
    int b;

    // Individually Decelaring Function as Friends.
    // friend int calculator::sumRealComplex(Complex o1,Complex o2);
    // friend int calculator:: sumCompComplex(Complex o1,Complex o2);


    // Alter: Decelaring the entire class as friend so that any function in the calculator will access the private member of the Complex Class.
    friend class calculator;
public:
    void setDataBySum(Complex o1, Complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    static void displayData(Complex number)
    {
        cout << "Your complex Number is: " << number.a << " + " << number.b << "i" << endl;
    }
};

int calculator::sumRealComplex(Complex o1,Complex o2){
    return(o1.a + o2.a);
}

int calculator::sumCompComplex(Complex o1,Complex o2){
    return(o1.b + o2.b);
}


int main()
{
    Complex o1,o2;
    o1.setData(3,4);
    o2.setData(1,2);
    calculator cal1;
    int result = cal1.sumRealComplex(o1,o2);
    int ComplexResult= cal1.sumCompComplex(o1,o2);
    cout<<"The sum of real part of the o1 and o2 is: "<< result<<endl;
    cout<<"The sum of the Complex Part of the o1 and o2 is: "<<ComplexResult<<endl;

    return 0;
}
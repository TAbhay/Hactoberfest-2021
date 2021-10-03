#include<iostream>

using namespace std;

int number_of_rectangles(int b)
{
    int count;
    if((b-2)<2)
    {
        return 0;
    }

    else
    {
        count=(b-2)/2;
        return count+number_of_rectangles(b-2);
    }

}


int main()
{
    int t;
    cin>>t;
    int b;
    int count;

    while(t--)
    {
        cin>>b;
        count=number_of_rectangles(b);
        cout<<count<<endl;

    }
}

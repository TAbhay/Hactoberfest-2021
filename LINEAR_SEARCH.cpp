#include<iostream>
using namespace std;
int main()
{
    int a[100];
    int size, i, j;
    int flag = 0;
    cout<<"Enter the Size of Array: ";
    cin>>size;
    cout<<"\nEnter the Elements of Array one by one";
    for(i=0; i<size; i++)
    {
        cout<<"\nEnter Element as "<<i+1<<" position: ";
        cin>>a[i];
    }

    int item;
    cout<<"\nEnter the Item which you want to search: ";
    cin>>item;

    for(i=0; i<size; i++)
    {
        if(a[i] == item)
        {
            flag = 1;
            break;
        }
    }

    if(flag == 1)
    cout<<"\nElement found at "<<i+1<<" position";

    else
    cout<<"\nElement Not Found at any of Position in Array"<<"\nEnter Correct Element";

   return 0;
}

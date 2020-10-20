#include<iostream>
using namespace std;

void diff(int a[], int b[], int m, int n);

int main()
{
    int a[10], b[10], m, n;
    cout<<"Enter the size of setA: ";
    cin>>m;
    cout<<"Enter the elements of setA: ";
    for(int i = 0; i < m; i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the elements of setB: ";
    cin>>n;
    cout<<"Enter the elements of setB: ";
    for(int j = 0; j < n;j++)
    {
        cin>>b[j];
    }
    cout<<"Difference between both sets:"<<endl;
    diff(a, b,m,n);
}

void diff(int a[10], int b[10], int p, int q)
{
    cout<<"A - B :";
    int flag = 0;
    int i,j;
    for(i = 0; i < p; i++)
    {
        flag = 0;
        for(j = 0; j < q;j++)
        {
            if(a[i] == b[j])
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            cout<<a[i]<<" ";
        }

    }
    cout<<endl;
    cout<<"B - A: ";
    for(j = 0; j < q; j++)
    {
        flag = 0;
        for(i = 0; i < p; i++)
        {
            if(b[j] == a[i])
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            cout<<b[j]<<" ";
        }
    }
}

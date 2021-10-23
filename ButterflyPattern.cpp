#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n=8;
    // cin>>n;

    for(int i=1; i<=n;i++) 
     { int k=ceil(n/2);
         for(int j=1;j<=i;j++) 
           { 
              if(j==1||j==i)
                cout<<"* ";
              else if(i>k && (j+i-1==n))
                cout<<"* ";
              else                                  //Butterfly pattern
                cout<<"  ";
           }

         for(int j=n;j>i;j--) 
           { 
              if(j==i+1)
                 cout<<"* ";   
              else if( i<=k && j==2*i)                
                 cout<<"* ";
              else 
                 cout<<"  ";
           }
     cout<<endl;

     }

}

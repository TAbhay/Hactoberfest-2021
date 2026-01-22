#include<iostream>
using namespace std;
int main(){
int n;
  cout<<"enter how many numbers you want in your array"<<endl;
  cin>>n;
  int arr[n];
  cout<<"enter the array elements"<<endl;
  for(int i;i<n;i++)
    cin>>arr[i];
  for(int i=1;i<n;i++)
  {  int current=arr[i];
     int j=i-1;
   while(j>=0 && arr[j]>current)
   {
       arr[j+1]=arr[j];
       j--;
   }
   arr[j+1]=current;
  }
  for(int x:arr)
  cout<<x<<"  ";
  return 0;
}

  

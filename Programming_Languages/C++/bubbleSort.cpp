#include<iostream>
using namespace std;
int main ()
{
   int i, j,temp;
   int a[10] = {10,2,0,14,43,25,18,1,5,45};
   cout <<"Input list ...\n";
   for(i = 0; i<10; i++) {
      cout <<a[i]<<"\t";
   }
cout<<endl;
for(i = 0; i<10; i++) {
   for(j = i+1; j<10; j++) //traversing every two alternate elements simulatenously
   {
      if(a[j] < a[i]) {
         temp = a[i]; //swapping and arranging element
         a[i] = a[j];
         a[j] = temp;
      }
   }
}
cout <<"Sorted Element List ...\n";
for(i = 0; i<10; i++) {
   cout <<a[i]<<"\t"; //displaying array after sorting
}
return 0;
}

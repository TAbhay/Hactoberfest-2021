#include <iostream>
#include <string>
using namespace std;

  
// A function to implement bubble sort 
void bubbleSort(string str, int n) 
{ 
   int i, j; 
   for (i = 0; i < n-1; i++)    
       for (j = 0; j < n-i-1; j++)  
       
           if (str[j] > str[j+1]) 
             {
                
                 char temp = str[j+1];
                 str[j+1] = str[j];
                 str[j] = temp;
             } 
        cout<<"\n String after sorting: "<<str<<" \n";
} 
int main ()
{
    string str;
    cout<<"Enter the string to be sorted: ";
    cin>>str;
    int len = str.length();
    cout<<len;
    cout<<"\n String before sorting: "<<str<<" \n";

    bubbleSort(str,len);
   
    return 0;
}

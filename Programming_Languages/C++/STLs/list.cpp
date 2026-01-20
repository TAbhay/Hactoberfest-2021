#include <iostream> 
#include <list> 
#include <iterator> 
using namespace std; 
  
//function for printing the elements in a list 
void printlist(list <int> g) 
{ 
    list <int> :: iterator i; 
    for(i = g.begin(); i != g.end(); ++i) 
        cout << '\t' << *i ;
} 
  
int main() 
{ 
  
    list <int> list1; 
  
  
    for (int i = 1; i <= 7; ++i) 
    { 
        list1.push_back(i); 
    } 
    
    //printing list1
    printlist(list1); 
  
    //first element of list  
    cout << "\nfirst element: " << list1.front(); 
    //last element of list
    cout << "\nlast element : " << list1.back(); 
  
    //pop element from front and print
    list1.pop_front(); 
    printlist(list1); 
  
    //pop element from front and print
    list1.pop_back(); 
    printlist(list1); 
  
    //reverse the list and print it
    list1.reverse(); 
    printlist(list1); 
  
    //sort list and print it
    list1.sort(); 
    printlist(list1); 

    //output
    //1 2 3 4 5 6 7
    // 1
    // 7
    // 2 3 4 5 6 7 
    // 2 3 4 5 6
    // 6 5 4 3 2
    // 2 3 4 5 6 
    return 0; 
  
} 
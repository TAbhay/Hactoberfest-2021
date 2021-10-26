//C++ program to reverse a linked list
#include <bits/stdc++.h>
using namespace std;
 
// Link list node //
struct Node {
    int data;
    struct Node* next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
 
struct LinkedList {
    Node* head;
    LinkedList() { head = NULL; }
 
    
    void reverse()
    {
      
        Node* current = head;
        Node *prev = NULL, *next = NULL;
 
        while (current != NULL) {
            
            next = current->next;
 
            
            current->next = prev;
 
            
            prev = current;
            current = next;
        }
        head = prev;
    }
 
    
    void print()
    {
        struct Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
 
    void push(int data)
    {
        Node* temp = new Node(data);
        temp->next = head;
        head = temp;
    }
};
 

int main()
{
    /* Start with the empty list */
    LinkedList ll;
    ll.push(56);
    ll.push(45);
    ll.push(25);
    ll.push(45);
 
    cout << "Given linked list\n";
    ll.print();
 
    ll.reverse();
 
    cout << "\nReversed Linked list \n";
    ll.print();
    return 0;
}

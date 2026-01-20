#include <bits/stdc++.h>
using namespace std;
typedef struct Node
{
    char value;
    struct Node* next;
}Node;

Node* CreateNode(Node *head, char val)
{
    Node *newnode = new Node;
    newnode->value = val ;
    newnode->next = NULL ;
    static Node *temp;
    if ( head == NULL ) {
        head = newnode ;
        temp=head;
    }
    else
    {
        temp->next = newnode ;
        temp =temp->next;
    }
    return head ;
}


void printList(Node *head) {
    Node *temp = head ;
    if (temp) {
        while ( temp!= NULL ) {
            printf ( "%c", temp->value ) ;
            temp = temp->next ;
        }
    }
}


Node*  BinaryList(Node *head)
{
    // write your code here
    if(head == NULL || head -> next == NULL)
      return head;

    Node *temp = head;
    int ones = 0, zeros = 0;

    while(temp){
      if(temp -> value == '1')
        ones++ ;
      else
        zeros++ ;
      temp = temp -> next;
    }

    temp = head;
    int flag = 1;
    if((zeros == ones) || (zeros == (ones + 1))){
      while(temp){
        if(flag){
          temp -> value = '0';
          flag = 0;
        }
        else{
          temp -> value = '1';
          flag = 1;
        }
        temp = temp -> next;
      }
      return head;
    }
    else
      return NULL;
}

int main() {

    int t;
    cin>>t;
    while(t--){

        Node *head = NULL, *temp ;
        string str;
        cin>>str;
        int size=str.length();
        for ( int i = 0 ; i < size ; i ++ ) {
            char ch=str[i];
            head = CreateNode(head, ch) ;
        }

        temp = BinaryList(head) ;
        if ( temp != NULL )
            printList(temp);
        else
            cout<<-1;

        cout<<endl;
    }
    return 0;
}
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        next=NULL;
    }

};

int main()
{
    cout<<"Program started.."<<endl;
    //creating node statically
    //pehle do node banake ke data enter kr denge phir dono node ko connect kr denge
    Node n1(4);
    Node n2(6);
    //ab dono node ko connect krne ke liye n2 ka address n1 ke next me daal denge
    n1.next=&n2;
    cout<<"values of node n1 and n2"<<endl;
    cout<<n1.data<<endl;
    cout<<n2.data<<endl;
    //pehle node ko head node kehte hain and last node ko tail node hme apne paas
    //head node ka address hmesha rakhna hota hai so that we can traverse through all the
    //linked list just by having head node address

    //so yaha ek node ka address store krna hai to pointer bhi node type banayenge
    Node* head=&n1;

    //printing values using head
    cout<<head->data<<endl;
    //head me next wale ka address daal diya and then data print krwa liye
    // safer side ek aur pointer leke head ka value dal denge aur usse traverese krenge
    head=head->next;
    cout<<head->data<<endl;

    //dynamically creating the nodes
    Node* n3 = new Node(56);
    Node* n4 = new Node(84);
    //now in dono nodes ko connect krna hai
    Node* head1 = n3;
    n3->next=n4;

    return 0;
}

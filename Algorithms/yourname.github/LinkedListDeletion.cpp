#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
};

class NodeClass
{
    Node *head=NULL;
    Node *ptr;
    int data;

protected:
    void Message();
    void display_reset();

public:
    void LinkedListCreation();
    void Deleting_the_First_node();
    void Deleting_the_Last_node();
    void Deleting_the_node_of_given_value();
    void Deleting_the_node_of_given_position();
    void Display();
};


void NodeClass :: Message(){
    if (head == NULL){
        cout<<"Linked List Empty"<<endl;
        return;
    }
}

void NodeClass ::Deleting_the_node_of_given_position() // for deleting the element in the given position.
{
    int position;
    cout << "Enter the position for which you want to delete the node: ";
    cin >> position;
    Message();
    Node *traversal = head;
    Node *previous = head;

    for (int i = 0; i < position - 1; i++)
    {
        traversal = traversal->next;
    }
    for (int i = 0; i < position - 2; i++)
    {
        previous = previous->next;
    }

    if (traversal == head)
    {
       head=traversal->next;
       traversal->next=NULL;
       delete traversal;
    }
    else
    {
        previous->next = traversal->next;
        traversal->next = NULL;
        delete traversal;
    }
}

void NodeClass ::Deleting_the_node_of_given_value() // for deleting the node at the given value.
{
    int value;
    bool flag = false;
    cout << "Enter the Value which you want to delete: ";
    cin >> value;
    Message();
    if (head->data == value)
    {
        Node *headStore = head;
        head = head->next;
        delete headStore;
    }
    else
    {
        Node *traversal_Node = head;
        Node *previousNode = head;

        while (traversal_Node != NULL)
        {
            if (traversal_Node->data == value)
            {
                flag = true;
                break;
            }
            traversal_Node = traversal_Node->next;
        }

        while (previousNode->next != traversal_Node)
        {
            previousNode = previousNode->next;
        }

        if (flag)
        {
            previousNode->next = traversal_Node->next;
            traversal_Node->next = NULL;
            delete traversal_Node;
        }
        else
        {
            cout << "Value not present in the Linked List: ";
        }
    }
}

void NodeClass ::Deleting_the_Last_node() // for deleting the last node in the linked list
{
    Message();
    Node *traversal_Node = head;
    Node *previousNode = head;
    while (traversal_Node->next != NULL)
    {
        traversal_Node = traversal_Node->next;
    }
    while (previousNode->next != traversal_Node)
    {
        previousNode = previousNode->next;
    }

    previousNode->next = NULL;
    delete traversal_Node;
}

void NodeClass ::Deleting_the_First_node() // for deleting the node at the beginning.
{
    Message();
    Node *D = new Node;
    D = head;
    head = D->next;
    D->next = NULL;
    delete D;
}

void NodeClass ::display_reset()
{
    ptr = head;
}

void NodeClass::LinkedListCreation()
{
    int Number_Nodes, elemental_data;
    Node *ptr = new Node;
    cout << "Enter the number of nodes for which you want an Linked List: ";
    cin >> Number_Nodes;

    for (int i = 0; i < Number_Nodes; i++)
    {
        Node *currentNode = new Node;
        cout << "Enter the Data for the node " << i + 1 << " : ";
        cin >> elemental_data;
        if (i == 0)
        {
            head = ptr = currentNode;
        }
        currentNode->data = elemental_data;
        currentNode->next = NULL;
        ptr->next = currentNode;
        ptr = currentNode;
    }
}
void NodeClass ::Display()
{
    Message();
    display_reset();
    while (ptr != NULL)
    {
        cout << ptr->data << endl;
        ptr = ptr->next;
    }
}

int main()
{
    int choice;
    Node *ptr = new Node;
    NodeClass operations;
    do
    {
        /* code */
        cout << "1. Enter the Numbers of Node you want in the Linked list" << endl;
        cout << "2. Display the Linked List" << endl;
        cout << "3. Delete the node from the beginning" << endl;
        cout << "4. Delete the node from the end" << endl;
        cout << "5. Delete the node of the given value" << endl;
        cout << "6. Delete the node at the given position in between" << endl;
        cout << "7. Exit" << endl;
        cout << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            operations.LinkedListCreation();
            break;
        }
        case 2:
        {
            operations.Display();
            break;
        }
        case 3:
        {
            operations.Deleting_the_First_node();
            break;
        }
        case 4:
        {
            operations.Deleting_the_Last_node();
            break;
        }
        case 5:
        {
            operations.Deleting_the_node_of_given_value();
            break;
        }
        case 6:
        {
            operations.Deleting_the_node_of_given_position();
            break;
        }
        case 7:
        {
            break;
        }

        default:
        {
            cout << "Wrong choice!!!!!!!!";
        }
        }
    } while (choice != 7);

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    string Name;
    int roll_number;
    Node *next;
};

class Node_operations
{
    Node *head;
    Node *ptr;
protected:
    void reset_Position(){
        ptr=head;
    }
public:
    Node_operations(Node *ptr)
    {
        head = ptr;
    }
    void insertion(int number);
    void insertion_beginning();
    void insertion_ending();
    void insertion_afterNode();
    void insertion_Node_given_position();
    void display();
};

void Node_operations::display() // for displaying the node
{


    reset_Position();

    while (ptr != NULL)
    {
        cout << ptr->Name << endl;
        cout << ptr->roll_number << endl;
        cout << endl;
        ptr = ptr->next;
    }
}
void Node_operations::insertion(int number) // for creating the node and inserting the node.
{

    string name;
    int roll_Number;
    Node *temp = new Node;

    for (int i = 0; i < number; i++)
    {
        Node *currentPointer = new Node;
        cout << "Enter the Roll Number of Student " << i + 1 << " : " << endl;
        cin >> roll_Number;
        cout << "Enter the Name of Student " << i + 1 << " : " << endl;
        cin >> name;
        if (i == 0)
        {
            head = temp = currentPointer;
        }

        currentPointer->Name = name;
        currentPointer->roll_number = roll_Number;
        currentPointer->next = NULL;

        temp->next = currentPointer;
        temp = currentPointer;
    }
}

void Node_operations::insertion_beginning() // for insertion of the node at the beginning
{
    int number;
    string name;
    cout << "Enter the roll number of student which you want to insert in the beginning: ";
    cin >> number;

    cout << "Enter the name of student which you want to insert in the beginning: ";
    cin >> name;
    Node *ptr_beginning = new Node;
    ptr_beginning->Name = name;
    ptr_beginning->roll_number = number;

    ptr_beginning->next = head;
    head = ptr_beginning;
}

void Node_operations::insertion_ending()
{
    Node *temp = new Node;
    Node *traversal_node = new Node;
    traversal_node = head;
    while (traversal_node->next != NULL)
    {
        traversal_node = traversal_node->next;
    }

    cout << "Enter the roll number of the Student: ";
    cin >> temp->roll_number;
    cout << "Enter the name: ";
    cin >> temp->Name;

    temp->next = NULL;
    traversal_node->next = temp;
}

void Node_operations::insertion_Node_given_position()
{
    int position;
    cout << "Enter the position for which you want to place that Node:- ";
    cin >> position;
    Node *previous = new Node;
    Node *newNode = new Node;
    previous = head;

    cout << "Enter the Roll Number of the new node: ";
    cin >> newNode->roll_number;
    cout << "Enter the Name of the new node: ";
    cin >> newNode->Name;
    for (int i = 0; i < position - 2; i++)
    {
        previous = previous->next;
    }

    newNode->next = previous->next;
    previous->next = newNode;
}

void Node_operations::insertion_afterNode()
{
    int position;
    cout << "Enter the position for which  you want to place the Node Afterwards";
    cin >> position;
    Node *previous = new Node;
    Node *newNode = new Node;
    previous = head;

    cout << "Enter the Roll No of Student: ";
    cin >> newNode->roll_number;
    cout << "Enter the name of the Student: ";
    cin >> newNode->Name;
    for (int i = 0; i < position - 1; i++)
    {
        previous = previous->next;
    }

    newNode->next = previous->next;
    previous->next = newNode;
}

int main()
{
    int choice;
    int number_of_nodes;
    Node *head;
    Node_operations operations(head);
    do
    {
        cout << "1. Enter the No of elements in the linked list" << endl;
        cout << "2. Insert the Node in the beginning" << endl;
        cout << "3. Insert the node in the end" << endl;
        cout << "4. Insert the node at a given position" << endl;
        cout << "5. Insert the node after the particular node" << endl;
        cout << "6. Display the Linked List" << endl;
        cout << "7. Exit " << endl;

        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {

            cout << "Enter the No of nodes which you want to insert in the linked List: ";
            cin >> number_of_nodes;
            operations.insertion(number_of_nodes);
            break;
        }
        case 2:
        {
            operations.insertion_beginning();
            break;
        }
        case 3:
        {
            operations.insertion_ending();
            break;
        }
        case 4:
        {
            operations.insertion_Node_given_position();
            break;
        }
        case 5:
        {
            operations.insertion_afterNode();
            break;
        }
        case 6:
        {
            operations.display();
            break;
        }
        case 7:
        {
            break;
        }

        default:
        {
            cout << "WRONG CHOICE !!!!!!!!!!!!!!!!!!!!!!!!!!!!!";
            break;
        }
        }
    } while (choice != 7);
    return 0;
}
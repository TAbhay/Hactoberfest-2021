#include <iostream>

using namespace std;

struct Node
{
    int info;
    struct Node *link;
};

struct Node *top = nullptr;

void Display()
{
    struct Node *ptr;
    if (top == nullptr)
        cout << "Stack is Empty";
    else
    {
        ptr = top;
        cout << "Stack Elements are: ";
        while (ptr != nullptr)
        {
            cout << ptr->info << " ";
            ptr = ptr->link;
        }
    }
    cout << endl;
}

void Push(int val)
{
    struct Node *newNode = new Node;
    newNode->info = val;
    newNode->link = top;
    top = newNode;
    Display();
}
void Pop()
{
    if (top == nullptr)
        cout << "Stack Underflow" << endl;
    else
    {
        cout << "The popped element is " << top->info << endl;
        top = top->link;
    }
    Display();
}

int main()
{
    int ch, value;

    while (true)
    {
        cout << "1) Push in the stack" << endl;
        cout << "2) Pop from the stack" << endl;
        cout << "3) Exit" << endl;

        cout << "Enter choice: " << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            cout << "Enter value to be pushed:" << endl;
            cin >> value;
            Push(value);
            break;
        }
        case 2:
        {
            Pop();
            break;
        }
        case 3:
        {
            exit(0);
        }
        default:
        {
            cout << "Invalid Choice" << endl;
        }
        }
    }
}
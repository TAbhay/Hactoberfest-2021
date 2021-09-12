#include <iostream>

using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node *head = nullptr;

node *createNode(int value)
{
    struct node *temp;
    temp = new (struct node);
    if (temp == nullptr)
    {
        cout << "Memory not allocated " << endl;
        return 0;
    }
    else
    {
        temp->data = value;
        temp->next = nullptr;
        return temp;
    }
}

void Display()
{
    struct node *temp;
    if (head == nullptr)
    {
        cout << "The List is Empty" << endl;
        return;
    }
    temp = head;
    cout << "Elements of list are: " << endl;
    while (temp != nullptr)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "nullptr" << endl;
}

void Insert()
{
    int value, pos, count = 0;
    cout << "Enter the value to be inserted: ";
    cin >> value;
    struct node *temp, *s, *ptr;
    temp = createNode(value);
    cout << "Enter the position at which node to be inserted: ";
    cin >> pos;
    int i;
    s = head;
    while (s != nullptr)
    {
        s = s->next;
        count++;
    }
    if (pos == 1)
    {
        if (head == nullptr)
        {
            head = temp;
            head->next = nullptr;
        }
        else
        {
            ptr = head;
            head = temp;
            head->next = ptr;
        }
    }
    else if (pos > 1 && pos <= count)
    {
        s = head;
        for (i = 1; i < pos; i++)
        {
            ptr = s;
            s = s->next;
        }
        ptr->next = temp;
        temp->next = s;
    }
    else if (pos == count + 1)
    {
        s = head;
        while (s->next != nullptr)
        {
            s = s->next;
        }
        temp->next = nullptr;
        s->next = temp;
    }
    else
    {
        cout << "Position out of range" << endl;
    }
    Display();
}

void Delete()
{
    int pos, i, count = 0;
    if (head == nullptr)
    {
        cout << "List is empty" << endl;
        return;
    }
    cout << "Enter the position of value to be deleted: ";
    cin >> pos;
    struct node *s, *ptr;
    s = head;
    if (pos == 1)
    {
        head = s->next;
    }
    else
    {
        while (s != nullptr)
        {
            s = s->next;
            count++;
        }
        if (pos > 0 && pos <= count)
        {
            s = head;
            for (i = 1; i < pos; i++)
            {
                ptr = s;
                s = s->next;
            }
            ptr->next = s->next;
        }
        else
        {
            cout << "Position out of range" << endl;
        }
    }
    free(s);
    cout << "Element Deleted" << endl;
    Display();
}

void Reverse()
{
    struct node *ptr1, *ptr2, *ptr3;
    if (head == nullptr)
    {
        cout << "List is empty" << endl;
        return;
    }
    if (head->next == nullptr)
    {
        return;
    }
    ptr1 = head;
    ptr2 = ptr1->next;
    ptr3 = ptr2->next;
    ptr1->next = nullptr;
    ptr2->next = ptr1;
    while (ptr3 != nullptr)
    {
        ptr1 = ptr2;
        ptr2 = ptr3;
        ptr3 = ptr3->next;
        ptr2->next = ptr1;
    }
    head = ptr2;
    Display();
}

int main()
{
    int choice;

    while (true)
    {
        cout << "1.Insert Node at a position" << endl;
        cout << "2.Delete Linked List" << endl;
        cout << "3.Reverse Linked List " << endl;
        cout << "4.Exit " << endl;
        cout << "Enter your choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            Insert();
            cout << endl;
            break;
        case 2:
            Delete();
            cout << endl;
            break;
        case 3:
            Reverse();
            cout << endl;
            break;
        case 4:
            cout << "Exiting..." << endl;
            exit(0);
        default:
            cout << "Wrong choice" << endl;
        }
    }
}
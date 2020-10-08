#include <iostream>

using namespace std;
struct node
{
    int info;
    struct node *next;
    struct node *prev;
};

node *start = nullptr;

void Display()
{
    struct node *q;
    if (start == nullptr)
    {
        cout << "List empty,nothing to display" << endl;
        return;
    }
    q = start;
    cout << "The Doubly Link List is :" << endl;
    while (q != nullptr)
    {
        cout << q->info << " <-> ";
        q = q->next;
    }
    cout << "nullptr" << endl;
}

void createList(int value)
{
    struct node *s, *temp;
    temp = new (struct node);
    temp->info = value;
    temp->next = nullptr;
    if (start == nullptr)
    {
        temp->prev = nullptr;
        start = temp;
    }
    else
    {
        s = start;
        while (s->next != nullptr)
            s = s->next;
        s->next = temp;
        temp->prev = s;
    }
    Display();
}

void addBegin(int value)
{
    if (start == nullptr)
    {
        cout << "First Create the list." << endl;
        return;
    }
    struct node *temp;
    temp = new (struct node);
    temp->prev = nullptr;
    temp->info = value;
    temp->next = start;
    start->prev = temp;
    start = temp;
    cout << "Element Inserted" << endl;
    Display();
}

void addAfter(int value, int pos)
{
    if (start == nullptr)
    {
        cout << "First Create the list." << endl;
        return;
    }
    struct node *temp, *q;
    int i;
    q = start;
    for (i = 0; i < pos - 1; i++)
    {
        q = q->next;
        if (q == nullptr)
        {
            cout << "There are less than ";
            cout << pos << " elements." << endl;
            return;
        }
    }
    temp = new (struct node);
    temp->info = value;
    if (q->next == nullptr)
    {
        q->next = temp;
        temp->next = nullptr;
        temp->prev = q;
    }
    else
    {
        temp->next = q->next;
        temp->next->prev = temp;
        q->next = temp;
        temp->prev = q;
    }
    cout << "Element Inserted" << endl;
    Display();
}

void Delete(int value)
{
    struct node *temp, *q;
    if (start->info == value)
    {
        temp = start;
        start = start->next;
        start->prev = nullptr;
        cout << "Element Deleted" << endl;
        Display();
        free(temp);
        return;
    }
    q = start;
    while (q->next->next != nullptr)
    {

        if (q->next->info == value)
        {
            temp = q->next;
            q->next = temp->next;
            temp->next->prev = q;
            cout << "Element Deleted" << endl;
            Display();
            free(temp);
            return;
        }
        q = q->next;
    }

    if (q->next->info == value)
    {
        temp = q->next;
        free(temp);
        q->next = nullptr;
        cout << "Element Deleted" << endl;
        Display();
        return;
    }
    cout << "Element " << value << " not found" << endl;
}

int main()
{
    int choice, element, position;
    while (1)
    {
        cout << "1.Create Node" << endl;
        cout << "2.Add at Beginning" << endl;
        cout << "3.Add after a position" << endl;
        cout << "4.Delete" << endl;
        cout << "5.Quit" << endl;
        cout << "Enter your choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter the element: ";
            cin >> element;
            createList(element);
            cout << endl;
            break;
        case 2:
            cout << "Enter the element: ";
            cin >> element;
            addBegin(element);
            cout << endl;
            break;
        case 3:
            cout << "Enter the element: ";
            cin >> element;
            cout << "Insert Element after position: ";
            cin >> position;
            addAfter(element, position);
            cout << endl;
            break;
        case 4:
            if (start == nullptr)
            {
                cout << "List empty,nothing to delete" << endl;
                break;
            }
            cout << "Enter the element for deletion: ";
            cin >> element;
            Delete(element);
            cout << endl;
            break;
        case 5:
            exit(0);
        default:
            cout << "Wrong choice" << endl;
        }
    }
}

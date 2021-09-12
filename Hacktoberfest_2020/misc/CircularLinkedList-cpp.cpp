#include <iostream>
#include <cstdlib>

using namespace std;

struct node
{
    int info;
    struct node *next;
};

node *last = nullptr;

void Display()
{
    struct node *s;
    if (last == nullptr)
    {
        cout << "List is empty, nothing to display" << endl;
        return;
    }
    s = last->next;
    cout << "Circular Link List: " << endl;
    while (s != last)
    {
        cout << s->info << "->";
        s = s->next;
    }
    cout << s->info << endl;
}

void createNode(int value)
{
    struct node *temp;
    temp = new (struct node);
    temp->info = value;
    if (last == nullptr)
    {
        last = temp;
        temp->next = last;
    }
    else
    {
        temp->next = last->next;
        last->next = temp;
        last = temp;
    }
    Display();
}

void addBegin(int value)
{
    if (last == nullptr)
    {
        cout << "First Create the list." << endl;
        return;
    }
    struct node *temp;
    temp = new (struct node);
    temp->info = value;
    temp->next = last->next;
    last->next = temp;

    Display();
}

void addAfter(int value, int pos)
{
    if (last == nullptr)
    {
        cout << "First Create the list." << endl;
        return;
    }
    struct node *temp, *s;
    s = last->next;
    for (int i = 0; i < pos - 1; i++)
    {
        s = s->next;
        if (s == last->next)
        {
            cout << "There are less than ";
            cout << pos << " in the list" << endl;
            return;
        }
    }
    temp = new (struct node);
    temp->next = s->next;
    temp->info = value;
    s->next = temp;

    if (s == last)
    {
        last = temp;
    }
    Display();
}

void Delete(int value)
{
    struct node *temp, *s;
    s = last->next;

    if (last->next == last && last->info == value)
    {
        temp = last;
        last = nullptr;
        free(temp);
        Display();
        return;
    }
    if (s->info == value)
    {
        temp = s;
        last->next = s->next;
        free(temp);
        Display();
        return;
    }
    while (s->next != last)
    {

        if (s->next->info == value)
        {
            temp = s->next;
            s->next = temp->next;
            free(temp);
            cout << "Element " << value;
            cout << " deleted from the list" << endl;
            Display();
            return;
        }
        s = s->next;
    }

    if (s->next->info == value)
    {
        temp = s->next;
        s->next = last->next;
        free(temp);
        last = s;
        Display();
        return;
    }
    cout << "Element " << value << " not found in the list" << endl;
}

int main()
{
    int choice, element, position;

    while (1)
    {
        cout << "1.Create Node" << endl;
        cout << "2.Add at beginning" << endl;
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
            createNode(element);
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
            cout << "Insert element after position: ";
            cin >> position;
            addAfter(element, position);
            cout << endl;
            break;
        case 4:
            if (last == nullptr)
            {
                cout << "List is empty, nothing to delete" << endl;
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

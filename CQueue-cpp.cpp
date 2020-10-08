#include <iostream>

using namespace std;

int main() {
    int front = -1, rear = -1, size, ch;

    cout<<"Enter the size of the Circular Queue"<<endl;
    cin>>size;
    int CQueue[size];

    cout<<"1)Enqueue\n";
    cout<<"2)Dequeue\n";
    cout<<"3)Display\n";
    cout<<"4)Exit\n";
    do {
        cout<<"Enter choice : "<<endl;
        cin>>ch;
        switch(ch) {
            case 1: {
                int val;
                cout << "Input value for Enqueue: " << endl;
                cin >> val;
                if ((front == 0 && rear == size - 1) || (front == rear + 1)) {
                    cout << "Queue Overflow \n";
                    break;
                }
                if (front == -1) {
                    front = 0;
                    rear = 0;
                } else {
                    if (rear == size - 1)
                        rear = 0;
                    else
                        rear = rear + 1;
                }
                CQueue[rear] = val;
                break;
            }
            case 2: {
                if (front == -1) {
                    cout << "Queue Underflow\n";
                    break;
                }
                cout << "Element deleted from queue is : " << CQueue[front] << endl;

                if (front == rear) {
                    front = -1;
                    rear = -1;
                } else {
                    if (front == size - 1)
                        front = 0;
                    else
                        front = front + 1;
                }
                break;
            }
            case 3: {
                int f = front, r = rear;
                if (front == -1) {
                    cout << "Queue is empty" << endl;
                    break;
                }
                cout << "Queue elements are :\n";
                if (f <= r) {
                    while (f <= r) {
                        cout << CQueue[f] << " ";
                        f++;
                    }
                } else {
                    while (f <= size - 1) {
                        cout << CQueue[f] << " ";
                        f++;
                    }
                    f = 0;
                    while (f <= r) {
                        cout << CQueue[f] << " ";
                        f++;
                    }
                }
                cout << endl;

                break;
            }
            case 4:
                cout<<"Exit\n";
                break;
            default: cout<<"Incorrect!\n";
        }
    } while(ch != 4);
    return 0;
}

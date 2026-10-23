// Write a program to implement the concept of Queue with Insert, Delete,
// Display and Exit operations

#include <iostream>
using namespace std;

int queue[100], front = -1, rear = -1, size;

void insert()
{
    int value;

    if (rear == size - 1)
    {
        cout << "Queue Overflow!" << endl;
    }
    else
    {
        cout << "Enter element: ";
        cin >> value;

        if (front == -1)
            front = 0;

        rear++;
        queue[rear] = value;

        cout << "Element inserted successfully." << endl;
    }
}

void deleteElement()
{
    if (front == -1 || front > rear)
    {
        cout << "Queue Underflow!" << endl;
    }
    else
    {
        cout << "Deleted element: " << queue[front] << endl;
        front++;

        if (front > rear)
        {
            front = rear = -1;
        }
    }
}

void display()
{
    if (front == -1)
    {
        cout << "Queue is empty." << endl;
    }
    else
    {
        cout << "Queue elements are: ";

        for (int i = front; i <= rear; i++)
        {
            cout << queue[i] << " ";
        }

        cout << endl;
    }
}

int main()
{
    int choice;

    cout << "Enter queue size: ";
    cin >> size;

    do
    {
        cout << "\n--- QUEUE MENU ---" << endl;
        cout << "1. Insert" << endl;
        cout << "2. Delete" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                insert();
                break;

            case 2:
                deleteElement();
                break;

            case 3:
                display();
                break;

            case 4:
                cout << "Exiting program." << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }

    } while (choice != 4);

    return 0;
}

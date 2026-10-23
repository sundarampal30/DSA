// Write a program to implement the concept of Stack with Push, Pop, Display
// and Exit operations


#include <iostream>
using namespace std;

int stack[100], top = -1, size;

void push()
{
    int value;

    if (top == size - 1)
    {
        cout << "Stack Overflow!" << endl;
    }
    else
    {
        cout << "Enter element: ";
        cin >> value;
        top++;
        stack[top] = value;
        cout << "Element pushed successfully." << endl;
    }
}

void pop()
{
    if (top == -1)
    {
        cout << "Stack Underflow!" << endl;
    }
    else
    {
        cout << "Popped element: " << stack[top] << endl;
        top--;
    }
}

void display()
{
    if (top == -1)
    {
        cout << "Stack is empty." << endl;
    }
    else
    {
        cout << "Stack elements are:" << endl;

        for (int i = top; i >= 0; i--)
        {
            cout << stack[i] << endl;
        }
    }
}

int main()
{
    int choice;

    cout << "Enter stack size: ";
    cin >> size;

    do
    {
        cout << "\n--- STACK MENU ---" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                push();
                break;

            case 2:
                pop();
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

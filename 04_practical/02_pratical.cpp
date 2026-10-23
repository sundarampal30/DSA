// Write a program to search the element in list and display the same


#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

int main()
{
    Node *head = NULL, *temp, *newNode;
    int n, i, key, found = 0;

    cout << "Enter number of nodes: ";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        newNode = new Node;

        cout << "Enter data: ";
        cin >> newNode->data;

        newNode->next = NULL;

        if (head == NULL)
        {
            head = newNode;
            temp = head;
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }
    }

    cout << "Enter element to search: ";
    cin >> key;

    temp = head;

    while (temp != NULL)
    {
        if (temp->data == key)
        {
            cout << "Element found: " << temp->data;
            found = 1;
            break;
        }

        temp = temp->next;
    }

    if (found == 0)
    {
        cout << "Element not found.";
    }

    return 0;
}

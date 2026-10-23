// Write a program to search the elements in the linked list and display the
// Same

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

int main()
{
    Node *head = NULL, *newNode, *temp;
    int n, value;

    cout << "Enter number of nodes: ";
    cin >> n;

    // Create linked list
    for (int i = 0; i < n; i++)
    {
        newNode = new Node;

        cout << "Enter element " << i + 1 << ": ";
        cin >> value;

        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            temp = head;

            while (temp->next != NULL)
            {
                temp = temp->next;
            }

            temp->next = newNode;
        }
    }

    // Display linked list
    cout << "\nLinked List: ";

    temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL";

    return 0;
}

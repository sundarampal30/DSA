//  Write a program to store the elements in 1-D array and perform the
//  operations likes searching, sorting and reversing the elements. [Menu
//  Driven]

#include <iostream>
using namespace std;

int main()
{
    int a[100], n, i, j, choice, key, temp;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    do
    {
        cout << "\n--- MENU ---\n";
        cout << "1. Display Array\n";
        cout << "2. Search Element\n";
        cout << "3. Sort Array\n";
        cout << "4. Reverse Array\n";
        cout << "5. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Array elements: ";
            for (i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
            break;

        case 2:
            cout << "Enter element to search: ";
            cin >> key;

            for (i = 0; i < n; i++)
            {
                if (a[i] == key)
                    break;
            }

            if (i < n)
                cout << "Element found at position " << i + 1 << endl;
            else
                cout << "Element not found!" << endl;

            break;

        case 3:
            for (i = 0; i < n - 1; i++)
            {
                for (j = 0; j < n - i - 1; j++)
                {
                    if (a[j] > a[j + 1])
                    {
                        temp = a[j];
                        a[j] = a[j + 1];
                        a[j + 1] = temp;
                    }
                }
            }

            cout << "Sorted array: ";
            for (i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
            break;

        case 4:
            for (i = 0, j = n - 1; i < j; i++, j--)
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }

            cout << "Reversed array: ";
            for (i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
            break;

        case 5:
            cout << "Exiting program..." << endl;
            break;

        default:
            cout << "Invalid choice! Please try again." << endl;
        }

    } while (choice != 5);

    return 0;
}

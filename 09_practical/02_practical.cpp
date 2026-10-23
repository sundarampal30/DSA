// Write a program to implement the concept of linear probing.


#include <iostream>
using namespace std;

int main()
{
    int hash[10], n, key, index, i;

    for (i = 0; i < 10; i++)
    {
        hash[i] = -1;
    }

    cout << "Enter number of elements: ";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cout << "Enter element: ";
        cin >> key;

        index = key % 10;

        while (hash[index] != -1)
        {
            index = (index + 1) % 10;
        }

        hash[index] = key;
    }

    cout << "\nHash Table:\n";

    for (i = 0; i < 10; i++)
    {
        cout << i << " : ";

        if (hash[i] == -1)
            cout << "Empty";
        else
            cout << hash[i];

        cout << endl;
    }

    return 0;
}

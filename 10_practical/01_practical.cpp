// Write a program to generate the adjacency matrix


#include <iostream>
using namespace std;

int main()
{
    int a[10][10], n, i, j;

    cout << "Enter number of vertices: ";
    cin >> n;

    cout << "Enter adjacency matrix elements:\n";

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << "\nAdjacency Matrix:\n";

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}

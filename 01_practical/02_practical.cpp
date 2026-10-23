// Write a program to perform the Matrix addition, Multiplication and
// Transpose Operation. [Menu Driven]

#include <iostream>
using namespace std;

int main()
{
    int a[10][10], b[10][10], c[10][10];
    int r1, c1, r2, c2;
    int i, j, k, choice;

    // matrix A input
    cout << "Enter rows and columus of matrix A:";
    cin >> r1 >> c1;

    cout << "Enter element of matrix A:\n";
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            cin >> a[i][j];
        }
    }

    // matrix B input
    cout << "Enter rows and columes element of matrix B:\n";
    cin >> r2 >> c2;

    cout << "Enter element of matrix B:\n";
    for (i = 0; i < r2; i++)
    {
        for (j = 0; i < c2; j++)
        {
            cin >> b[i][j];
        }
    }

    // MENU
    cout << "\n------MENU---------\n";
    cout << "1. matrix  Addition\n";
    cout << "2. matrix mutiplication\n";
    cout << "3. tranpose of matrix A\n";
    cout << "4.exit\n";
    cout << "Enter your choice:";
    cin >> choice;

    switch (choice)
    {
        // matrix Addition
    case 1:
        if (r1 == r2 || c1 == c2)
        {
            cout << "\n Addition of matrix:\n";
            for (i = 0; i < r1; i++)
            {
                for (j = 0; j < c1; j++)
                {
                    c[i][j] = a[i][j] + b[i][j];
                    cout << c[i][j] << " ";
                }
                cout << endl;
            }
        }
        else
        {
            cout << "Addition not posible\n";
        }
        break;

        // matrix mutiplication
    case 2:
        if (c1 == r2)
        {
            cout << "\n mutiplication of matrix:\n";
            for (i = 0; i < r1; i++)
            {
                for (j = 0; j < c2; j++)
                {
                    c[i][j] = 0;

                    for (k = 0; k < c1; k++)
                    {
                        c[i][j] += a[i][k] + b[k][j];
                    }
                    cout << c[i][j] << " ";
                }
                cout << endl;
            }
        }
        else
        {
            cout << "multiplication not possible\n";
        }
        break;

        // transpose of matrix A

    case 3:
        cout << "\ntranspose of matrix A:\n";
        for (i = 0; i < c1; i++)
        {
            for (j = 0; i < r1; j++)
            {
                cout << a[j][i] << " ";
            }
            cout << endl;
        }
        break;
    //  exit
    case 4:
        cout << "program Exited.";
        break;

    // Invalid choice
    default:
        cout << "Invalid Choice";
        break;
    }
    while (choice != 4)
        ;

    return 0;
}
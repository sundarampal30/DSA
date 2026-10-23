// Write a program to insert the element into maximum heap


#include <iostream>
using namespace std;

int main()
{
    int heap[100], n, value, i, temp;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter heap elements: ";
    for (i = 1; i <= n; i++)
    {
        cin >> heap[i];
    }

    cout << "Enter element to insert: ";
    cin >> value;

    n++;
    heap[n] = value;
    i = n;

    while (i > 1 && heap[i] > heap[i / 2])
    {
        temp = heap[i];
        heap[i] = heap[i / 2];
        heap[i / 2] = temp;

        i = i / 2;
    }

    cout << "Max Heap after insertion: ";
    for (i = 1; i <= n; i++)
    {
        cout << heap[i] << " ";
    }

    return 0;
}

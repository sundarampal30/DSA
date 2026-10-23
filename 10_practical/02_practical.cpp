// Write a program for shortest path diagram


#include <iostream>
using namespace std;

int main()
{
    int n, cost[10][10], dist[10], visited[10];
    int i, j, src, min, next;

    cout << "Enter number of vertices: ";
    cin >> n;

    cout << "Enter cost adjacency matrix (0 for no edge):\n";

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> cost[i][j];

            if (cost[i][j] == 0 && i != j)
                cost[i][j] = 9999;
        }
    }

    cout << "Enter source vertex (0 to " << n - 1 << "): ";
    cin >> src;

    for (i = 0; i < n; i++)
    {
        dist[i] = cost[src][i];
        visited[i] = 0;
    }

    dist[src] = 0;
    visited[src] = 1;

    for (i = 1; i < n; i++)
    {
        min = 9999;
        next = -1;

        for (j = 0; j < n; j++)
        {
            if (!visited[j] && dist[j] < min)
            {
                min = dist[j];
                next = j;
            }
        }

        if (next == -1)
            break;

        visited[next] = 1;

        for (j = 0; j < n; j++)
        {
            if (!visited[j] &&
                cost[next][j] != 9999 &&
                dist[next] + cost[next][j] < dist[j])
            {
                dist[j] = dist[next] + cost[next][j];
            }
        }
    }

    cout << "\nShortest distances from vertex " << src << ":\n";

    for (i = 0; i < n; i++)
    {
        if (dist[i] == 9999)
            cout << "Vertex " << i << " : Unreachable" << endl;
        else
            cout << "Vertex " << i << " : " << dist[i] << endl;
    }

    return 0;
}

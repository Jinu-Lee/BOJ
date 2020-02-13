#include <iostream>

using namespace std;

int find(int k, int n);

int main()
{
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        int k, n;
        scanf("%d", &k);
        scanf("%d", &n);
        printf("%d\n", find(k, n));
    }

    return 0;
}

int find(int k, int n)
{
    int **arr = new int *[k + 1];
    for (int i = 0; i <= k; i++)
        arr[i] = new int[n + 1];

    for (int i = 0; i <= k; i++)
        for (int j = 1; j <= n; j++)
            if (i == 0)
                arr[i][j] = j;
            else if (j == 1)
                arr[i][j] = 1;
            else
                arr[i][j] = arr[i - 1][j] + arr[i][j - 1];

    int x = arr[k][n];

    for (int i = 0; i < k; i++)
        delete arr[i];
    delete arr;

    return x;
}
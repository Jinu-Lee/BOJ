#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

int arr[1000][1000];
int memo[1000][1000];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%1d", &arr[i][j]);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            memo[i][j] = -1;

    if (n == 1)
        for (int i = 0; i < m; i++)
            if (arr[0][i])
                memo[0][i] = 0;
    if (m == 1)
        for (int i = 0; i < n; i++)
            if (arr[i][0])
                memo[i][0] = 0;

    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= m; j++)
            if (arr[i][j] == arr[i + 1][j] && arr[i + 1][j] == arr[i][j + 1] && arr[i][j + 1] == arr[i + 1][j + 1] && arr[i][j])
                memo[i][j] = 1;
            else if (arr[i][j])
                memo[i][j] = 0;

    int a = n, b = m;
    while (a != 0 || b != 0)
    {
        for (int i = 0; i <= a; i++)
            for (int j = 0; j <= b; j++)
                if (memo[i][j] == memo[i + 1][j] && memo[i + 1][j] == memo[i][j + 1] && memo[i][j + 1] == memo[i + 1][j + 1] && memo[i][j])
                    memo[i][j]++;

        a && a--;
        b && b--;
    }

    int tmp = -2;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (tmp < memo[i][j])
                tmp = memo[i][j];

    printf("%d", (tmp + 1) * (tmp + 1));

    return 0;
}
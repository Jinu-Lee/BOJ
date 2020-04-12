#include <iostream>

using namespace std;

int min(int a, int b)
{
    return a < b ? a : b;
}

int main()
{
    int n, k;
    int memo[10001] = {0};
    int coin[101] = {0};
    scanf("%d %d", &n, &k);

    for (int i = 1; i <= n; i++)
        scanf("%d", &coin[i]);

    for (int i = 1; i <= 10000; i++)
        memo[i] = 10001;

    for (int i = 1; i <= n; i++)
        for (int j = coin[i]; j <= k; j++)
            memo[j] = min(memo[j], memo[j - coin[i]] + 1);

    if (memo[k] == 10001)
        printf("-1");
    else
        printf("%d", memo[k]);

    return 0;
}
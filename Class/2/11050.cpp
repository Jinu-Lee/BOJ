#include <iostream>

using namespace std;

int factorial(int n)
{
    if (n <= 1)
        return 1;
    else
        return factorial(n - 1) * n;
}

int main()
{
    int N, K;
    scanf("%d %d", &N, &K);

    int combination = factorial(N) / (factorial(K) * factorial(N - K));
    printf("%d", combination);

    return 0;
}
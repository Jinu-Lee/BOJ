#include <iostream>

using namespace std;

long long factorial(int);

int main()
{
    int N;

    scanf("%d", &N);
    printf("%d", factorial(N));

    return 0;
}

long long factorial(int N)
{
    if (N <= 1)
        return 1;
    else
        return N * factorial(N - 1);
}
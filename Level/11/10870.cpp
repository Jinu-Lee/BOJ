#include <iostream>

using namespace std;

long long fibo(int);

int main()
{
    int N;

    scanf("%d", &N);
    printf("%d", fibo(N));

    return 0;
}

long long fibo(int N)
{
    if (N <= 1)
        return N;
    else
        return fibo(N - 1) + fibo(N - 2);
}
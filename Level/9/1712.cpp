#include <iostream>

using namespace std;

int main()
{
    long long int a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);

    if (b >= c)
    {
        printf("-1");
        return 0;
    }

    long long int x = a / (c - b) + 1;
    printf("%lld", x);

    return 0;
}
#include <iostream>

using namespace std;

int d(int);

int main()
{
    int self_num[10001] = {
        0,
    };

    for (int i = 1; i <= 10000; i++)
    {
        int j = d(i);
        while (j <= 10000)
        {
            self_num[j] = 1;
            j = d(j);
        }
    }

    for (int i = 1; i <= 10000; i++)
    {
        if (!self_num[i])
            printf("%d\n", i);
    }

    return 0;
}

int d(int n)
{
    int res = n;
    while (n > 0)
    {
        res += n % 10;
        n /= 10;
    }
    return res;
}
#include <iostream>

using namespace std;

bool check(int);

int main()
{
    int N, count = 0;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        if (check(i))
            count++;
    }

    printf("%d", count);

    return 0;
}

bool check(int x)
{
    if (x < 100)
        return true;
    else if (x == 1000)
        return false;
    else
    {
        int a[3];
        for (int i = 0; i < 3; i++)
        {
            a[i] = x % 10;
            x /= 10;
        }
        if (a[0] - a[1] == a[1] - a[2])
            return true;
        else
            return false;
    }
}
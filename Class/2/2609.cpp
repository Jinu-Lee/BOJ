#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a, b, temp, res[2];
    scanf("%d %d", &a, &b);

    if (a > b)
        swap(a, b);

    temp = a;
    while (true)
    {
        if (a % temp == 0 && b % temp == 0)
        {
            res[0] = temp;
            break;
        }
        else
            temp--;
    }

    temp = b;
    while (true)
    {
        if (temp % a == 0 && temp % b == 0)
        {
            res[1] = temp;
            break;
        }
        else
            temp++;
    }

    printf("%d\n%d", res[0], res[1]);

    return 0;
}
#include <iostream>

using namespace std;

bool check_prime(int);

int main()
{
    int N, cnt = 0;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        int num;
        scanf("%d", &num);

        if (check_prime(num))
            cnt++;
    }

    printf("%d", cnt);

    return 0;
}

bool check_prime(int num)
{
    if (num == 1)
        return false;

    bool flag = true;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            flag = false;
            break;
        }
    }

    return flag;
}
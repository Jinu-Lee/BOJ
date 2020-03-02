#include <iostream>

using namespace std;

const int SIZE = 123456 * 2 + 1;
bool prime[SIZE];

void check_prime();

int main()
{
    check_prime();

    int num;
    scanf("%d", &num);

    while (num != 0)
    {
        int cnt = 0;

        for (int i = num + 1; i <= num * 2; i++)
            if (prime[i])
                cnt++;

        printf("%d\n", cnt);
        scanf("%d", &num);
    }

    return 0;
}

void check_prime()
{
    prime[1] = false;

    for (int i = 2; i <= SIZE; i++)
        prime[i] = true;

    for (int i = 2; i * i <= SIZE; i++)
        if (prime[i])
            for (int j = i * 2; j <= SIZE; j += i)
                prime[j] = false;

    return;
}
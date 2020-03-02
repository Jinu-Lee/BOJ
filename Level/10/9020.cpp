#include <iostream>
#include <vector>

using namespace std;

const int SIZE = 10001;
bool prime[SIZE];

void check_prime();

int main()
{
    check_prime();

    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        int num;
        scanf("%d", &num);

        vector<int> v;

        for (int a = 2; a <= num / 2; a++)
        {
            int b = num - a;
            if (prime[a] && prime[b])
                v.push_back(a);
        }

        printf("%d %d\n", v[v.size() - 1], num - v[v.size() - 1]);
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
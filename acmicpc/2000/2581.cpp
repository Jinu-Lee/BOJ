#include <iostream>
#include <vector>

using namespace std;

bool check_prime(int);

int main()
{
    int M, N;
    scanf("%d %d", &M, &N);

    vector<int> v;

    for (int i = M; i <= N; i++)
    {
        if (check_prime(i))
            v.push_back(i);
    }

    if (v.empty())
        printf("-1");
    else
    {
        int sum = 0;
        for (auto i : v)
            sum += i;

        printf("%d\n%d", sum, v[0]);
    }

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
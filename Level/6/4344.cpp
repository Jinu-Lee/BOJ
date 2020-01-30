#include <iostream>
#include <vector>

using namespace std;

void over_average(int);

int main()
{
    int C;
    scanf("%d", &C);

    for (int i = 0; i < C; i++)
    {
        int N;
        scanf("%d", &N);
        over_average(N);
    }

    return 0;
}

void over_average(int N)
{
    int sum = 0, num = 0;
    vector<int> v(N);

    for (auto i = v.begin(); i != v.end(); i++)
    {
        scanf("%d", i);
        sum += *i;
    }

    for (auto i = v.begin(); i != v.end(); i++)
    {
        if ((*i) * N > sum)
            num++;
    }

    float percent = static_cast<float>(num * 100) / N;
    printf("%.3f%%\n", percent);

    return;
}
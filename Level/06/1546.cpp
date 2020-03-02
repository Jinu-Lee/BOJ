#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N;
    scanf("%d", &N);

    vector<int> v(N);
    for (auto i = v.begin(); i != v.end(); i++)
        scanf("%d", i);

    int max = v[0], sum = 0;
    for (auto i = v.begin(); i != v.end(); i++)
    {
        if (*i > max)
            max = *i;
        sum += *i;
    }

    float aver = static_cast<float>(sum * 100) / (max * N);
    printf("%f", aver);

    return 0;
}
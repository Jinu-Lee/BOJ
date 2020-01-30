#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, temp;
    scanf("%d", &N);

    vector<int> v;

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &temp);
        v.push_back(temp);
    }

    int min = v[0], max = v[0];

    for (auto i = v.begin(); i != v.end(); i++)
    {
        if (*i > max)
            max = *i;
        if (*i < min)
            min = *i;
    }

    printf("%d %d", min, max);

    return 0;
}
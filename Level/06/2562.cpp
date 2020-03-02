#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int temp;
    vector<int> v;

    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &temp);
        v.push_back(temp);
    }

    int max = v[0], index = 0;
    for (int i = 0; i < 9; i++)
    {
        if (v[i] > max)
        {
            max = v[i];
            index = i;
        }
    }

    printf("%d\n%d", max, index + 1);

    return 0;
}
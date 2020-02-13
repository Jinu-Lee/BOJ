#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int weight;
    cin >> weight;

    vector<int> v;

    for (int i = 0; i <= weight / 5; i++)
    {
        for (int j = 0; j <= weight / 3; j++)
        {
            if (weight == 5 * i + 3 * j)
                v.push_back(i + j);
        }
    }

    if (!v.size())
        cout << "-1";
    else
    {
        int min = v[0];
        for (auto i : v)
        {
            if (i < min)
                min = i;
        }
        cout << min;
    }

    return 0;
}
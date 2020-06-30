#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int sum = 0;
    char temp;
    string n = "";
    vector<int> num, idx;

    while (temp = getchar())
        if (temp == '\n')
            break;
        else if (temp >= '0' && temp <= '9')
            n += temp;
        else
        {
            num.push_back(stoi(n));
            n = temp;
        }
    num.push_back(stoi(n));

    for (int i = 0; i < num.size(); i++)
        if (num[i] < 0)
            idx.push_back(i);

    if (idx.size() != 0)
    {
        if (idx[idx.size() - 1] != num.size() - 1)
            idx.push_back(num.size());

        for (int i = 0; i < idx.size(); i++)
        {
            if (idx[i] >= num.size() - 1)
                break;
            for (int j = idx[i] + 1; j < num.size(); j++)
            {
                if (j >= idx[i + 1])
                    break;
                num[j] *= -1;
            }
        }
    }

    for (auto i : num)
        sum += i;

    printf("%d", sum);

    return 0;
}
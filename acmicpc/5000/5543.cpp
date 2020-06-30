#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int burger[3], soda[2];

    for (auto &i : burger)
        cin >> i;
    for (auto &i : soda)
        cin >> i;

    sort(burger, burger + 3);
    sort(soda, soda + 2);

    cout << burger[0] + soda[0] - 50;

    return 0;
}
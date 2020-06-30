#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;

    vector<int> v;

    for (char c : s)
        v.push_back(c - '0');

    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    for (auto i : v)
        printf("%d", i);

    return 0;
}
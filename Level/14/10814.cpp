#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
using Account = pair<int, string>;

bool compare(Account a, Account b)
{
    return a.first < b.first;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    vector<Account> v(N);
    for (int i = 0; i < N; i++)
        cin >> v[i].first >> v[i].second;

    stable_sort(v.begin(), v.end(), compare);

    for (int i = 0; i < N; i++)
        cout << v[i].first << " " << v[i].second << "\n";

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int n;
vector<string> v;
map<char, int> m1, m2;
vector<pair<int, char>> temp;

int main() 
{
    ios::sync_with_stdio(0), cin.tie(0);

    cin >> n;
    v.resize(n);
    for (auto &i : v) {
        cin >> i;
    }

    for (string s : v) {
        int len = s.length();
        for (int i = 0; i < len; i++) {
            m1[s[i]] += pow(10, len - i - 1);
        }
    }

    for (auto i : m1) {
        temp.emplace_back(i.second, i.first);
    }

    sort(temp.begin(), temp.end());
    reverse(temp.begin(), temp.end());

    int num = 9;
    for(auto i : temp) {
        m2[i.second] = num--;
    }

    int ans = 0;
    for (auto i : m1) {
        ans += m2[i.first] * i.second;
    }
    cout << ans << endl;
}
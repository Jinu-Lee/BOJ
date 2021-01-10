#include <bits/stdc++.h>

using namespace std;

int n, c;
vector<int> v;

bool valid(int key) {
    
}

int main() 
{
    ios::sync_with_stdio(0), cin.tie(0);

    cin >> n >> c;

    v.resize(n);
    for (auto &i : v) cin >> i;

    sort(v.begin(), v.end());

    int left = 0, right = v[n - 1];
    while (left <= right) {
        int mid = (left + right) / 2;
        if (valid(mid)) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    cout << right << endl;
}
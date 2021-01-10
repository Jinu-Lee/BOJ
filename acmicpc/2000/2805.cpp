#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll n, m, result;

ll BinarySearch(vector<ll> v, ll left, ll right) {
    ll mid = (left + right) / 2;
    ll sum = 0;

    if (left > right) return result;

    for (int i = 0; i < n; i++) {
        if (v[i] - mid < 0) {
            break;
        }
        else {
            sum += v[i] - mid;
        }
    }

    if (sum >= m) {
        result = (result < mid) ? mid : result;
    }

    if (sum > m) {
        return BinarySearch(v, mid + 1, right);
    }
    else {
        return BinarySearch(v, left, mid - 1);
    }
}

int main() 
{
    ios::sync_with_stdio(0), cin.tie(0);

    cin >> n >> m;

    vector<ll> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.rbegin(), v.rend());
    cout << BinarySearch(v, 0, v[0]) << '\n';

    return 0;
}
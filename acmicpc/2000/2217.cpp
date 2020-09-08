#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> v(N);
    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    for (int i = 0; i < N; i++) {
        v[i] *= (i + 1);
    }

    cout << *max_element(v.begin(), v.end());
    return 0;
}
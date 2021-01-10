#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0);

    int T, N;
    cin >> T;

    while (T--)
    {
        cin >> N;

        vector<pair<int, int>> v(N);
        for (int i = 0; i < N; i++) {
            cin >> v[i].first >> v[i].second;
        }

        sort(v.begin(), v.end());
        
        int count = 0, min = INT32_MAX;
        for (int i = 0; i < N; i++) {
            if (v[i].second < min) {
                min = v[i].second;
                count++;
            }
        }

        cout << count << endl;
    }
    
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

long long p[101] = {0, 1, 1, 1, 2, 2};

int main()
{
    ios::sync_with_stdio(0), cin.tie(0);

    for (int i = 6; i <= 100; i++) {
        p[i] = p[i - 1] + p[i - 5];
    }

    int T;
    cin >> T;
    while(T--) {
        int N;
        cin >> N;
        
        cout << p[N] << endl;
    }

    return 0;
}
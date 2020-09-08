#include <bits/stdc++.h>

using namespace std;

int T[16] = {0};
int P[16] = {0};
int memo[17] = {0};

int main()
{
    int N;
    cin >> N;

    for(int i = 1; i <= N; i++) {
        cin >> T[i] >> P[i];
    }

    for(int i = 1; i <= N + 1; i++) {
        int t = T[i], p = P[i];

        if (i + t > N + 1) {
            continue;
        }

        for (int j = i + t; j <= N + 1; j++) {
            memo[j] = max(memo[i] + P[i], memo[j]);
        }
    }

    cout << memo[N + 1] << endl;
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    vector<int> v(N);
    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }

    int count = 0;
    for (int i = 0; i < N; i++) {
        int sum = 0;
        for (int j = i; j < N; j++) {
            sum += v[j];
            if (sum == M) {
                count++;
            }
            if (sum >= M) {
                break;
            }
        }
    }

    cout << count;

    return 0;
}
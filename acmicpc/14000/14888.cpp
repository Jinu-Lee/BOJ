#include <bits/stdc++.h>

using namespace std;

int num[100];
vector<int> v;

int main()
{
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> num[i];
    }

    for (int i = 0; i < 4; i++) {
        int cnt;
        cin >> cnt;

        for (int j = 0; j < cnt; j++) {
            v.push_back(i);
        }
    }

    int max = INT32_MIN, min = INT32_MAX;

    do {
        int res = num[0];

        for (int i = 0; i < N - 1; i++) {
            switch(v[i]) {
                case 0:
                    res += num[i + 1];
                    break;
                case 1:
                    res -= num[i + 1];
                    break;
                case 2:
                    res *= num[i + 1];
                    break;
                case 3:
                    res /= num[i + 1];
            }
        }

        if (res < min) {
            min = res;
        }
        if (res > max) {
            max = res;
        }

    } while(next_permutation(v.begin(), v.end()));

    cout << max << '\n' << min;
    return 0;
}
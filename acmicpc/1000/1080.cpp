#include <bits/stdc++.h>

using namespace std;

int a[50][50];
int b[50][50];
int n, m;

void flip(int i, int j) {
    for (int x = i; x < i + 3; x++) {
        for (int y = j; y < j + 3; y++) {
            a[x][y] = !a[x][y];
        }
    }
}

int main() 
{
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%1d", &a[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%1d", &b[i][j]);
        }
    }

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] != b[i][j]) {
                if (i < n - 2 && j < m - 2) {
                    flip(i, j);
                    cnt++;
                }
                else {
                    cout << -1 << endl;
                    return 0;
                }
            }
        }
    }

    cout << cnt << endl;
}
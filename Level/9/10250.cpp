#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int H, W, N;
        cin >> H >> W >> N;

        int x = ((N - 1) % H + 1) * 100 + (N - 1) / H + 1;
        cout << x << endl;
    }

    return 0;
}
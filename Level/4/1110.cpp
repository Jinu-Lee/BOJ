#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, temp, cycle = 0;
    cin >> N;

    vector<int> v;
    v.push_back(N);

    while (true)
    {
        int temp = v[cycle] / 10 + v[cycle] % 10;
        v.push_back((v[cycle++] % 10) * 10 + temp % 10);

        if (v[cycle] == N)
            break;
    }

    cout << cycle << endl;

    return 0;
}
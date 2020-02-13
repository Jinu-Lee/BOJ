#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int end_num = 1, cnt = 1;
    while (true)
    {
        if (end_num >= N)
            break;
        else
        {
            end_num += 6 * cnt;
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}

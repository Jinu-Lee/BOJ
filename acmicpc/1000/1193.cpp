#include <iostream>

using namespace std;

int main()
{
    int X;
    cin >> X;

    int end = 1, cnt = 1;
    while (true)
    {
        if (end >= X)
            break;
        else
            end += ++cnt;
    }

    int a, b;
    if (cnt % 2 == 1)
        a = 1 + end - X, b = cnt - end + X;
    else
        a = cnt - end + X, b = 1 + end - X;

    cout << a << "/" << b << endl;

    return 0;
}

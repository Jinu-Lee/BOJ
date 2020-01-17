#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cin >> a >> b;

    for(int i = 1; b / i; i *= 10)
    {
        int c = b / i;
        c %= 10;
        cout << a * c << endl;
    }
    cout << a * b << endl;
}

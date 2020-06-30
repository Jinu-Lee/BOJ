#include <iostream>

using namespace std;

const double PI = 3.14159265358979323846;

int main()
{
    double R;
    cin >> R;

    double S_1 = PI * R * R, S_2 = 2.0 * R * R;

    cout << fixed;
    cout.precision(6);
    cout << S_1 << endl << S_2;

    return 0;
}
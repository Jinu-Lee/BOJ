#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int time = 0;
    for (char c : s)
        if (c >= 'A' && c <= 'C')
            time += 3;
        else if (c >= 'D' && c <= 'F')
            time += 4;
        else if (c >= 'G' && c <= 'I')
            time += 5;
        else if (c >= 'J' && c <= 'L')
            time += 6;
        else if (c >= 'M' && c <= 'O')
            time += 7;
        else if (c >= 'P' && c <= 'S')
            time += 8;
        else if (c >= 'T' && c <= 'V')
            time += 9;
        else
            time += 10;

    printf("%d", time);
}

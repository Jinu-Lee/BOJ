#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;

    string alpha[8] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};

    for (auto i : alpha)
        while (s.find(i) != string::npos)
            s.replace(s.find(i), i.length(), "*");

    printf("%d", s.length());

    return 0;
}
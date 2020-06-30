#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;

    char c = 'a';
    while(c <= 'z')
        printf("%d ", s.find(c++));

    return 0;
}
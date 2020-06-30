#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N, num = 666, count = 0;
    scanf("%d", &N);

    while (true)
    {
        string s = to_string(num);
        if (s.find("666") != string::npos)
            count++;
        if (count == N)
            break;
        num++;
    }

    printf("%d", num);

    return 0;
}
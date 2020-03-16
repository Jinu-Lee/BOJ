#include <iostream>

using namespace std;

int main()
{
    int num[5], sum = 0;

    for (auto &i : num)
    {
        scanf("%d", &i);
        i = i * i;
        sum += i;
    }

    printf("%d", sum % 10);

    return 0;
}
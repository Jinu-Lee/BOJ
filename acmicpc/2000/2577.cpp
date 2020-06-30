#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    vector<int> v;
    for (int i = 0; i < 10; i++)
        v.push_back(0);

    int n = a * b * c;

    while (n > 0)
    {
        v[n % 10]++;
        n /= 10;
    }

    for (int i = 0; i < 10; i++)
        printf("%d\n", v[i]);

    return 0;
}
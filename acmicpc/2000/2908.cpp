#include <iostream>

using namespace std;

int reverse_num(int);

int main()
{
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    n1 = reverse_num(n1);
    n2 = reverse_num(n2);

    printf("%d", n1 > n2 ? n1 : n2);

    return 0;
}

int reverse_num(int n)
{
    int a[3];
    for (int i = 0; i < 3; i++)
    {
        a[i] = n % 10;
        n /= 10;
    }
    return 100 * a[0] + 10 * a[1] + a[2];
}
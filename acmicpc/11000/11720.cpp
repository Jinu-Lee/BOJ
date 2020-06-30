#include <iostream>

using namespace std;

int main()
{
    int N, sum = 0;
    scanf("%d", &N);

    for(int i = 0; i < N; i++)
    {
        int n;
        scanf("%1d", &n);
        sum += n;
    }

    printf("%d", sum);

    return 0;
}
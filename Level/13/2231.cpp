#include <iostream>

using namespace std;

int main()
{
    int N, M = 0;
    scanf("%d", &N);

    for (int i = 1; i < N; i++)
    {
        int j = i, sum = 0;
        while (j > 0)
        {
            sum += j % 10;
            j /= 10;
        }

        if (sum == N - i)
        {
            M = i;
            break;
        }
    }

    printf("%d", M);

    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        int a[3], b[3];
        for (int i = 0; i < 3; i++)
            scanf("%d", &a[i]);
        for (int i = 0; i < 3; i++)
            scanf("%d", &b[i]);

        int d = (a[0] - b[0]) * (a[0] - b[0]) + (a[1] - b[1]) * (a[1] - b[1]);
        int r1 = (a[2] + b[2]) * (a[2] + b[2]);
        int r2 = (a[2] - b[2]) * (a[2] - b[2]);

        if (d == 0)
        {
            if (r2 == 0)
                printf("-1\n");
            else
                printf("0\n");
        }
        else if (d == r1 || d == r2)
            printf("1\n");
        else if (r2 < d && d < r1)
            printf("2\n");
        else
            printf("0\n");
    }

    return 0;
}
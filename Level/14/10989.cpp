#include <iostream>

using namespace std;

int main()
{
    int N;
    scanf("%d", &N);

    int count[10001] = {
        0,
    };

    for (int i = 0; i < N; i++)
    {
        int temp;
        scanf("%d", &temp);
        count[temp]++;
    }

    for (int i = 1; i <= 10000; i++)
        count[i] += count[i - 1];

    for (int i = 1; i <= 10000; i++)
        if (count[i - 1] != count[i])
            for (int j = 0; j < (count[i] - count[i - 1]); j++)
                printf("%d\n", i);

    
    return 0;
}
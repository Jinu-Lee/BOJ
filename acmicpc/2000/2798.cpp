#include <iostream>

using namespace std;

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);

    int *card = new int[N];
    for (int i = 0; i < N; i++)
        scanf("%d", &card[i]);

    int max = 0;
    for (int i = 0; i < N - 2; i++)
        for (int j = 1; j < N - 1; j++)
            for (int k = 2; k < N; k++)
                if (i != j && j != k && i != k)
                    if (card[i] + card[j] + card[k] <= M && card[i] + card[j] + card[k] >= max)
                        max = card[i] + card[j] + card[k];

    printf("%d", max);

    free(card);
    return 0;
}
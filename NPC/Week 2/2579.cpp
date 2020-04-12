#include <iostream>

using namespace std;

int max(int a, int b)
{
    return a > b ? a : b;
}

int main()
{
    int memo[301] = {0};
    int score[301] = {0};
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
        scanf("%d", &score[i]);

    memo[1] = score[1];
    memo[2] = score[1] + score[2];
    memo[3] = max(score[1], score[2]) + score[3];
    for (int i = 4; i <= N; i++)
        memo[i] = max(memo[i - 3] + score[i - 1], memo[i - 2]) + score[i];

    printf("%d", memo[N]);

    return 0;
}
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);

    int board[N][M];
    vector<int> v1, v2;

    for (int i = 0; i < N; i++)
    {
        getchar();
        for (int j = 0; j < M; j++)
            board[i][j] = (getchar() == 'B') ? 1 : 0;
    }

    for (int i = 0; i <= N - 8; i++)
        for (int j = 0; j <= M - 8; j++)
        {
            int count1 = 0, count2 = 0, temp = board[i][j];
            for (int k = 0; k < 8; k++)
            {
                for (int l = 0; l < 8; l++)
                {
                    if (board[k + i][l + j] != temp)
                        count1++;
                    else
                        count2++;

                    temp = temp ? 0 : 1;
                }
                temp = temp ? 0 : 1;
            }
            v1.push_back(count1);
            v2.push_back(count2);
        }

    int min1 = v1[0];
    for (auto i : v1)
        if (min1 > i)
            min1 = i;

    int min2 = v2[0];
    for (auto i : v2)
        if (min2 > i)
            min2 = i;

    printf("%d", (min1 < min2) ? min1 : min2);

    return 0;
}
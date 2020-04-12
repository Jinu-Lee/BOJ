#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N, M;
    scanf("%d", &N);
    vector<int> v(N);
    printf("%d ",sizeof(long int*));

    for (int i = 0; i < N; i++)
        scanf("%d", &v[i]);

    scanf("%d", &M);
    for (int i = 0; i < M; i++)
    {
        int num;
        scanf("%d", &num);
        if (find(v.begin(), v.end(), num) != v.end())
            printf("1\n");
        else
            printf("0\n");
    }

    return 0;
}

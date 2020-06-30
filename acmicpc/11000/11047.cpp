#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int numberofcoin(vector<int> v,int N, int K);

int main()
{
    int N, K, ans;
    scanf("%d %d", &N, &K);

    vector<int> v(N);

    for(int i = 0; i < N; i++)
        scanf("%d",&v[i]);
    
    reverse(v.begin(), v.end());

    ans = numberofcoin(v, N, K);

    printf("%d", ans);

    return 0;
}

int numberofcoin(vector<int> v, int N, int K)
{
    int ans = 0;
    for(int i = 0; i < N; i++)
    {
        if(K / v[i] >= 1)
        {
            ans += K / v[i];
            K -= (K / v[i]) * v[i];
        }
        if(!K)
            break;
    }

    return ans;
}
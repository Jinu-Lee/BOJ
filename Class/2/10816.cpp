#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int M, N;

    scanf("%d", &N);
    vector<int> v(N);

    for(int i = 0; i < N; i++)
        scanf("%d", &v[i]);
    sort(v.begin(), v.end());

    scanf("%d", &M);
    while(M--)
    {
        int temp;
        scanf("%d", &temp);

        printf("%d ", upper_bound(v.begin(), v.end(), temp) - lower_bound(v.begin(), v.end(), temp));
    }
    
    return 0;
}
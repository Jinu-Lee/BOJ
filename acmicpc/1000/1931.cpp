#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.second == b.second)                   // 먼저 끝나는 순으로 배열
        return a.first < b.first;
    else
        return a.second < b.second;
}

int main()
{
    int N, ans = 0, end = 0;
    scanf("%d", &N);

    vector<pair<int, int>> meeting(N);

    for (int i = 0; i < N; i++)
        scanf("%d %d", &meeting[i].first, &meeting[i].second);

    sort(meeting.begin(), meeting.end(), cmp);

    for (int i = 0; i < N; i++)
        if (end <= meeting[i].first)
        {
            end = meeting[i].second;
            ans++;
        }

    printf("%d", ans);
    
    return 0;
}
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    int N;
    scanf("%d", &N);

    int arr[N], sum = 0;
    int count[4000 * 2 + 1] = {
        0,
    };

    for (int i = 0; i < N; i++)
        scanf("%d", &arr[i]);

    sort(arr, arr + N);

    for (auto i : arr)
    {
        sum += i;
        count[i + 4000]++;
    }

    int max_cnt = count[0], freq, second = 0;
    for (auto i : count)
        max_cnt = max(max_cnt, i);

    for (int i = 0; i <= 8000; i++)
        if (count[i] == max_cnt)
        {
            freq = i - 4000;
            if (second)
                break;
            second = 1;
        }

    printf("%.0f\n", round((float)sum / N));
    printf("%d\n", arr[N / 2]);
    printf("%d\n", freq);
    printf("%d", arr[N - 1] - arr[0]);

    return 0;
}
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    scanf("%d", &N);

    int arr[N];
    for (auto &i : arr)
        scanf("%d", &i);

    sort(arr, arr + N);

    for (auto i : arr)
        printf("%d\n", i);

    return 0;
}
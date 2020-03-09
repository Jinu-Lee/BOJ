#include <iostream>

using namespace std;

int main()
{
    int N;
    scanf("%d", &N);

    int arr[N];
    for (auto &i : arr)
        scanf("%d", &i);

    for (int i = 0; i < N - 1; i++)
        for (int j = 0; j < N - 1 - i; j++)
            if (arr[j] > arr[j + 1])
            {   
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }

    for (auto i : arr)
        printf("%d\n", i);

    return 0;
}
#include <iostream>
#include <deque>

using namespace std;

int main()
{
    int N;
    scanf("%d", &N);

    deque<int> dq;
    for (int i = 1; i <= N; i++)
        dq.push_back(i);

    while (true)
    {
        if (dq.size() == 1)
            break;
        else
            dq.pop_front();

        if (dq.size() == 1)
            break;
        else
        {
            dq.push_back(dq.at(0));
            dq.pop_front();
        }
    }

    printf("%d", dq.at(0));

    return 0;
}
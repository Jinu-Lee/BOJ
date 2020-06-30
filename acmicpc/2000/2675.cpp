#include <iostream>

using namespace std;

int main()
{
    int T;
    scanf("%d", &T);

    for(int i = 0; i < T; i++)
    {
        int R;
        string s;
        cin >> R >> s;

        for(char c : s)
            for(int i = 0; i < R; i++)
                printf("%c", c);

        printf("\n");
    }

    return 0;
}
#include <iostream>

using namespace std;

typedef struct
{
    int x, y;
} location;

int main()
{
    location rec[3];

    for (int i = 0; i < 3; i++)
        scanf("%d %d", &rec[i].x, &rec[i].y);

    int x, y;

    if (rec[0].x == rec[1].x)
        x = rec[2].x;
    else if (rec[1].x == rec[2].x)
        x = rec[0].x;
    else
        x = rec[1].x;

    if (rec[0].y == rec[1].y)
        y = rec[2].y;
    else if (rec[1].y == rec[2].y)
        y = rec[0].y;
    else
        y = rec[1].y;

    printf("%d %d", x, y);

    return 0;
}

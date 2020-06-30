#include <iostream>

using namespace std;

int main()
{
    int x, y, w, h;
    scanf("%d %d %d %d", &x, &y, &w, &h);

    int min[3];
    if(x > w - x)
        min[0] = w - x;
    else
        min[0] = x;

    if(y > h - y)
        min[1] = h - y;
    else
        min[1] = y;
    
    if(min[0] > min[1])
        min[2] = min[1];
    else
        min[2] = min[0];        

    cout << min[2];

    return 0;
}
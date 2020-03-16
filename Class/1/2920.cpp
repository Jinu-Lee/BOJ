#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> ascending, descending, input(8);

    for (int i = 1; i <= 8; i++)
    {
        scanf("%d", &input[i - 1]);
        ascending.push_back(i);
        descending.push_back(9 - i);
    }

    if (input == ascending)
        printf("ascending");
    else if (input == descending)
        printf("descending");
    else
        printf("mixed");

    return 0;
}
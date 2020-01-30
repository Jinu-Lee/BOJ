#include <iostream>
#include <string>

using namespace std;

int check_result(string);

int main()
{
    int N, score;
    scanf("%d", &N);

    string temp;
    for (int i = 0; i < N; i++)
    {
        score = 0;
        cin >> temp;
        score = check_result(temp);
        printf("%d\n", score);
    }

    return 0;
}

int check_result(string res)
{
    int score = 0, temp = 0;

    for (int i = 0; i < res.length(); i++)
    {
        if (res[i] == 'O')
            score += ++temp;
        else if (res[i] == 'X')
            temp = 0;
    }

    return score;
}
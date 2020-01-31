#include <iostream>

using namespace std;

int main()
{
    int count[26] = {0,};

    string s;
    cin >> s;
    
    for(char c : s)
    {
        int idx = tolower(c) - 'a';
        count[idx]++;
    }

    int max = 0;
    for(int i = 0; i < 26; i++)
    {
        if(count[i] > max)
            max = count[i];
    }

    bool flag = false;
    int idx = 0;
    for(int i = 0; i < 26; i++)
    {
        if(count[i] == max)
        {
            if(!flag)
            {    
                flag = true;
                idx = i;
            }
            else
            {
                printf("?");
                flag = false;
                break;
            }
        }   
    }

    if(flag)
        printf("%c", 'A' + idx);

    return 0;
}
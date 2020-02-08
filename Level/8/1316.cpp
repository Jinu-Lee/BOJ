#include <iostream>

using namespace std;

bool group_word(string);

int main()
{
    int N, count = 0;
    cin >> N;

    for(int i = 0; i < N; i++)
    {
        string s;
        cin >> s;

        if(group_word(s))
            count++;
    }

    printf("%d", count);

    return 0;
}

bool group_word(string s)
{
    int found[26] = {0,};

    for (int i = 0; i < s.length(); i++)
        for (int j = i + 1; j < s.length(); j++)
            if (s[j] == s[i])
                s[j] = '*';
            else
                break;

    for(char c : s)
    {
        if(c != '*')
        {
            if(!found[c - 'a'])
                found[c-'a'] = 1;
            else
                return false;
        }
    }
    
    return true;
}
#include <bits/stdc++.h>
using namespace std;

int countAB(string s)
{
    int ans = 0;
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == 'a' && s[i + 1] == 'b')
            ans++;
    }
    return ans;
}

int countBA(string s)
{
    int ans = 0;
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == 'b' && s[i + 1] == 'a')
            ans++;
    }
    return ans;
}

void reduceAb(string &s, int lim)
{
    int curr=0;
    for (int i = 0; i < s.size() - 1; i++)
    {
        if(curr>=lim){
            break;
        }
        if (s[i] == 'a' && s[i + 1] == 'b')
        {
            s[i] = 'b';
            curr++;
        }
    }
}

void reduceBa(string s, int lim)
{
    int curr=0;
    for (int i = 0; i < s.size() - 1; i++)
    {
        if(curr>=lim)
            break;
        if (s[i] == 'b' && s[i + 1] == 'a')
        {
            s[i+1] = 'b';
            curr++;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int countAb = countAB(s);
        int countBa = countBA(s);
        cout << countBa << countAb << endl;
        if (countAb == countBa)
        {
            cout << s << endl;
            continue;
        }
        else if (countAb > countBa)
        {
            reduceAb(s,countAb-countBa);
        }
        else
        {
            reduceBa(s,countBa-countAb);
        }
        cout << s << endl;
    }
}
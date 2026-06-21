#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 1;
    if (n % 2 == 1)
    {
        cout << -1 << endl;
        return;
    }
    vector<int> color(n, 0);
    int alldone = 0;
    int diff = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
        {
            diff++;
        }
        else
        {
            diff--;
        }
    }
    if (diff != 0)
    {
        cout << -1 << endl;
        return;
    }
    vector<int> postOpen(n + 1, 0);
    vector<int> postClose(n + 1, 0);
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == '(')
        {
            postOpen[i] = 1;
        }
        else
        {
            postClose[i] = 1;
        }
        if (i < n - 1)
        {
            postOpen[i] += postOpen[i + 1];
            postClose[i] += postClose[i + 1];
        }
    }
    char st = s[0];
    int curr = 0;
    for (int j = 0; j < n; j++)
    {
        if (st == '(')
        {
            if (s[j] == st && postClose[j + 1] >= curr + 1)
            {
                color[j] = 1;
                curr++;
            }
            else if(s[j]!=st)
            {
                if (curr > 0)
                {
                    color[j] = 1;
                    curr--;
                }
            }
        }
        else
        {
            if (s[j] == st && postOpen[j + 1] >= curr + 1)
            {
                color[j] = 1;
                curr++;
                // cout<<curr<<endl;
            }
            else if(s[j]!=st)
            {
                if (curr > 0)
                {
                    color[j] = 1;
                    curr--;
                }
            }
        }
        // cout<<curr<<endl;
        // cout<<color[j]<<" ";
    }
    alldone = 1;
    for (int j = 0; j < n; j++)
    {
        // cout<<color[j]<<" ";
        if (color[j] == 0)
        {
            alldone = 0;
            break;
        }
    }
    if (!alldone)
    {
        ans++;
        for (int j = 0; j < n; j++)
        {
            if (color[j] == 0)
            {
                color[j] = 2;
            }
        }
    }
    cout << ans << endl;
    for (int i = 0; i < n - 1; i++)
    {
        cout << color[i] << " ";
    }
    cout << color[n - 1] << endl;
    // curr = 0;
    // st = ' ';
    // for (int i = 0; i < n; i++)
    // {
    //     if (color[i] == 1)
    //     {
    //         if (st == ' ')
    //         {
    //             st = s[i];
    //         }
    //         if(s[i]==st){
    //             curr++;
    //         }
    //         else{
    //             curr--;
    //         }
    //         cout << s[i];
    //     }
    // }
    // cout <<curr<<endl;
    // curr=0;
    //  st = ' ';  
    // cout << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     if (color[i] == 2)
    //     {
    //         if (st == ' ')
    //         {
    //             st = s[i];
    //         }
    //         if(s[i]==st){
    //             curr++;
    //         }
    //         else{
    //             curr--;
    //         }
    //         cout << s[i];
    //     }
    // }
    // cout <<curr<<endl;
    // cout << endl;
}

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    cin.sync_with_stdio(false); // fast IO

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
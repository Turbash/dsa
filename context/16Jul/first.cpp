#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    if (k > n / 2)
    {
        cout << -1 << endl;
        return;
    }
    vi preRs(n + 1, 0);
    vi pastLs(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        if (s[i-1] == 'R')
        {
            preRs[i] = preRs[i - 1] + 1;
        }
        else
        {
            preRs[i] = preRs[i - 1];
        }
        // cout<<preRs[i]<<" ";
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == 'L')
        {
            pastLs[i] = pastLs[i + 1] + 1;
        }
        else
        {
            pastLs[i] = pastLs[i + 1];
        }
        // cout<<pastLs[i]<<" ";
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'L' && preRs[i] < k)
        {
            // cout<<i<<" " <<preRs[i + 1]<<endl;
            ans++;
            s[i] = 'R';
            for (int i = 1; i <= n; i++)
            {

                if (s[i-1] == 'R')
                {
                    preRs[i] = preRs[i - 1] + 1;
                }
                else
                {
                    preRs[i] = preRs[i - 1];
                }
            }
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == 'R' && pastLs[i + 1] < k)
            {
            // cout<<i<<" " <<pastLs[i + 1]    <<endl;
            ans++;
            s[i] = 'L';
            for (int i = n - 1; i >= 0; i--)
            {
                if (s[i] == 'L')
                {
                    pastLs[i] = pastLs[i + 1] + 1;
                }
                else
                {
                    pastLs[i] = pastLs[i + 1];
                }
            }
        }
    }
    cout << ans << endl;
    // Your code here
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
        solve();
}
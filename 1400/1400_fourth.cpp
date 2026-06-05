#include <bits/stdc++.h>
using namespace std;

// Optimizes standard I/O operations for speed
void solve()
{
    // Your code goes here
    long long n, k;
    cin >> n >> k;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (k >= 3)
    {
        cout << 0 << endl;
    }
    if (k == 1)
    {
        priority_queue<long long, vector<long long>, greater<long long>> dif;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                long long some = abs(a[j] - a[i]);
                dif.push(some);
            }
        }
        long long ans = dif.size() > 0 ? dif.top() : LLONG_MAX;
        for (int i = 0; i < n; i++)
        {
            ans = min(ans, a[i]);
        }
        cout << ans << endl;
    }
    if (k == 2)
    {
        vector<long long> dif;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                long long some = abs(a[j] - a[i]);
                dif.push_back(some);
            }
        }
        sort(dif.begin(), dif.end());
        long long ans = dif.size() > 0 ? dif[0] : LLONG_MAX;
        for (int i = 0; i < n; i++)
        {
            ans = min(ans, a[i]);
            if (dif.size() > 0)
            {
                auto it = lower_bound(dif.begin(), dif.end(), a[i]);
                if (it != dif.end())
                {
                    ans = min(ans, abs(*it - a[i]));
                }
                if (it != dif.begin())
                {
                    it--;
                    ans = min(ans, abs(*it - a[i]));
                }
            }
        }
        cout << ans << endl;
    }
}

int main()
{
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t; // Comment this out if there is only 1 test case
    while (t--)
    {
        solve();
    }

    return 0;
}

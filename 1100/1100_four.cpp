#include <bits/stdc++.h>
using namespace std;

// Optimizes standard I/O operations for speed
void solve()
{
    // Your code goes here
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int curr = 0;
    int prev = -1;
    int ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (prev == -1)
        {
            prev = abs(a[i] % 2);
            curr += a[i];
            continue;
        }
        ans = max(ans, curr);
        if (curr < 0)
        {
            curr = 0;
        }
        if (prev == abs(a[i] % 2))
        {
            curr = a[i];
        }
        else
        {
            curr += a[i];
        }
        prev = abs(a[i] % 2);
    }
    ans = max(ans, curr);
    cout << ans << endl;
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

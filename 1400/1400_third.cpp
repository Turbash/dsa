#include <bits/stdc++.h>
using namespace std;

// Optimizes standard I/O operations for speed
void solve()
{
    // Your code goes here
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        cin >> a[i].second;
    }
    int low = 0;
    int high = 1e9;
    while (low < high)
    {
        int mid = low + (high - low) / 2;
        int currentLeft = 0;
        int currentRight = 0;
        int isValid = 1;
        for (int i = 0; i < n; i++)
        {
            currentLeft = max(currentLeft - mid, a[i].first);
            currentRight = min(currentRight + mid, a[i].second);
            if (currentLeft > currentRight)
            {
                low = mid + 1;
                isValid = 0;
                break;
            }
        }
        if (isValid)
            high = mid;
    }
    cout << low << endl;
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

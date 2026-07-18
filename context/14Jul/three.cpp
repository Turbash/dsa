#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve()
{
    int n, x, y;
    cin >> n >> x >> y;
    vi a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int g = gcd(x, y);

    for (int i = 0; i < n; i++)
    {
        if ((i + 1) % g != a[i] % g)
        {
            cout << "NO" <<endl;
            return;
        }
    }
    cout << "YES" <<endl;
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
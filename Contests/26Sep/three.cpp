#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using vi = vector<long long>;

void solve()
{
    ll n, k;
    cin >> n >> k;

    vi a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if (k == 1)
    {
        cout << accumulate(a.begin(), a.end(), 0LL) << endl;
        return;
    }

    ll l = k - 1;
    ll r = n - k;
    ll ans = 0;

    if (r < l)
    {
        for (ll t = 0; t < n - k; t++)
        {
            ans += max(a[l + t], a[r - t]);
        }
    }
    else
    {
        for (ll i = l; i <= r; i++)
        {
            ans += a[i];
        }

        for (ll t = 0; t < k - 2; t++)
        {
            ans += max(a[r + 1 + t], a[l - 1 - t]);
        }
    }

    ans += max(a[0], a[n - 1]);

    cout << ans << endl;
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
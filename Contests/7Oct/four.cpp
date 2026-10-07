#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using vi = vector<long long>;

void solve()
{
    long long n, k;
    cin >> n >> k;
    vector<vi> a(n, vi(3));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
    vector<pair<ll, ll>> keep;
    ll ans = LLONG_MAX;
    for (int i = 0; i < n; i++)
    {
        ll now = a[i][0] + a[i][1] + a[i][2];
        if (a[i][0] == a[i][1] && a[i][1] == a[i][2])
        {
            ans = min(ans, now);
        }
        else
        {
            if (a[i][0] <= a[i][1] && a[i][1] <= a[i][2])
                keep.push_back({now, 2 * (min(a[i][1] - a[i][0], a[i][2] - a[i][1]) + 1)});
            else
                keep.push_back({now, 0});
        }
    }

    if (keep.empty())
    {
        cout << ans << endl;
        return;
    }

    sort(keep.begin(), keep.end());
    ll now = LLONG_MIN;
    ll till = 0;
    ll extra = 0;
    bool broke = false;

    for (int i = 0; i < keep.size(); i++)
    {
        till = i + 1;

        if (now == LLONG_MIN)
            now = keep[i].first;
        else if (keep[i].first > now)
        {
            ll sofar = keep[i].first - now;
            ll req = sofar * i + extra;

            if (k >= req)
            {
                now = keep[i].first;
                k -= req;
                extra = 0;
            }
            else
            {
                broke = true;
                break;
            }
        }

        extra += keep[i].second;
    }

    if (till > 0)
    {
        ll cnt = broke ? till - 1 : till;

        if (cnt > 0 && k >= extra)
        {
            now += (k - extra) / cnt;
        }
        ans = min(ans, now);
    }
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
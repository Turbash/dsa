#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using vi = vector<long long>;

struct Fenwick
{
    int n;
    vector<ll> bit;

    Fenwick(int n) : n(n), bit(n + 1, 0) {}

    void add(int i, ll val)
    {
        for (++i; i <= n; i += i & -i)
            bit[i] += val;
    }

    // Sum over [0, r)
    ll sum(int r)
    {
        ll ans = 0;
        for (; r > 0; r -= r & -r)
            ans += bit[r];
        return ans;
    }

    // Sum over [l, r)
    ll sum(int l, int r)
    {
        return sum(r) - sum(l);
    }
};

ll f(ll x, vector<ll> &s, vector<pair<ll, ll>> &vp)
{
    int n = s.size() - 1;
    Fenwick fen(n+1);
    ll ans = 0;
    for (int i = 0; i <= n; i++)
    {
        int j = upper_bound(vp.begin(), vp.end(), make_pair(s[i] - x, LLONG_MAX)) - vp.begin();
        ans += fen.sum(j);
        fen.add(lower_bound(vp.begin(), vp.end(), make_pair(s[i], i)) - vp.begin(), 1);
    }
    return ans;
}

void solve()
{
    ll n, l, r;
    cin >> n >> l >> r;
    vector<ll> s(n + 1, 0);
    vector<pair<ll, ll>> vp = {{0, 0}};
    for (ll i = 1; i <= n; i++)
    {
        ll a;
        cin >> a;
        s[i] = s[i - 1] + a;
        vp.push_back({s[i], i});
    }
    sort(vp.begin(), vp.end());
    cout << f(l, s, vp) - f(r + 1, s, vp) << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
}
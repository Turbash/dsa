#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<ll>;

void solve()
{
    ll n;
    cin >> n;

    string s;
    cin >> s;

    ll ans = 0;

    vi nextA(n + 1, n);
    vi nextB(n + 1, n);
    vi nextC(n + 1, n);

    ll a = n, b = n, c = n;

    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == 'A')
            a = i;
        if (s[i] == 'B')
            b = i;
        if (s[i] == 'C')
            c = i;

        nextA[i] = a;
        nextB[i] = b;
        nextC[i] = c;
    }

    ll lastA = -1, lastB = -1, lastC = -1;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
            lastA = i;
        if (s[i] == 'B')
            lastB = i;
        if (s[i] == 'C')
            lastC = i;
    }

    ll jmax = min({lastA, lastB, lastC}) - 1;

    ll seenA = 0, seenB = 0, seenC = 0;
    ll all = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
            seenA = 1;
        if (s[i] == 'B')
            seenB = 1;
        if (s[i] == 'C')
            seenC = 1;

        if (seenA && seenB && seenC)
        {
            all = 1;
        }

        if (all)
        {
            ll jmin = max({nextA[i + 1],
                           nextB[i + 1],
                           nextC[i + 1]});

            if (jmin <= jmax)
            {
                ans += jmax - jmin + 1;
            }
            else
            {
                break;
            }
        }
    }

    cout << ans << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
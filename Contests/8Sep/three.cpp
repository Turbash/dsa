#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve()
{
    long long x, y;
    cin >> x >> y;
    long long tox = 0;

    for (int i = 29; i >= 0; i--)
    {
        if (((x+y) >> i) & 1)
        {
            if ((tox | (1LL << i)) <= x)
            {
                tox |= (1LL << i);
            }
        }
    }
    long long ans = x - tox;
    cout << x + y << " " << ans << endl;
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
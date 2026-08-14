#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

long long mod = 998244353;

vector<long long> inv(1000001, 1);
vector<long long> fact(1000001, 1);
vector<long long> invfact(1000001, 1);

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    long long xcounts = 0;
    long long ycounts = 0;
    long long segxs = 0;
    long long segys = 0;
    char now = s[0];
    if (s[0] == '0')
    {
        xcounts++;
    }
    else
    {
        ycounts++;
    }
    int i = 1;
    while (i < n)
    {
        if (s[i] == '0')
        {
            xcounts++;
        }
        else
        {
            ycounts++;
        }
        if (s[i] != now)
        {
            if (now == '0')
            {
                segxs++;
            }
            else
            {
                segys++;
            }
            now = s[i];
        }
        i++;
    }
    if (now == '0')
    {
        segxs++;
    }
    else
    {
        segys++;
    }

    long long xans = 1;
    if (segxs > 0)
    {
        xans = ((fact[xcounts - 1] * invfact[segxs - 1]) % mod * invfact[xcounts - segxs]) % mod;
        // cout << fact[xcounts - 1] << " " << inv[fact[segxs - 1]] << " " << inv[fact[xcounts - segxs]] << endl;
        // cout<< xans << endl;
    }
    long long yans = 1;
    if (segys > 0)
    {
        yans =  ((fact[ycounts - 1] * invfact[segys - 1]) % mod * invfact[ycounts - segys]) % mod;
        // cout << fact[ycounts - 1] << " " << inv[fact[segys - 1]] << " " << inv[fact[ycounts - segys]] << endl;
        // cout << yans << endl;
    }
    long long ans = (xans * yans) % mod;
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    fact[0] = 1;
    inv[0] = 1;
    inv[1] = 1;
    invfact[0] = 1;
    for (int i = 1; i <= 1000000; i++)
    {
        fact[i] = (fact[i - 1] * i) % mod;
        if (i > 1)
            inv[i] = mod -(mod / i * inv[mod % i]) % mod;

        invfact[i] = (invfact[i - 1] * inv[i]) % mod;
    }

    int t;
    cin >> t;
    while (t--)
        solve();
}
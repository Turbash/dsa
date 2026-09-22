#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using vi = vector<long long>;

void solve()
{
    long long n, k;
    cin >> n >> k;
    long long x, a, b, c;
    cin >> x >> a >> b >> c;
    vi z(n);
    z[0] = x;
    for (int i = 1; i < n; i++)
    {
        z[i] = (z[i - 1] * a + b) % c;
        // cout<<z[i]<<endl;
    }
    deque<int> dq;
    for (int i = 0; i < k; i++)
    {
        while (!dq.empty() && dq.back() > z[i])
            dq.pop_back();
        dq.push_back(z[i]);
    }
    long long ans = 0;
    ans^=dq.front();
    for (int i = 0; i < n - k; i++)
    {
        // cout<<dq.front()<<" "<<z[i]<<endl;
        if (!dq.empty() && dq.front() == z[i])
            dq.pop_front();
        while (!dq.empty() && dq.back() > z[i+k])
            dq.pop_back();
        dq.push_back(z[i+k]);
        ans^=dq.front();
    }
    cout<<ans<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    // int t;
    // cin >> t;
    // while (t--)
        solve();
}
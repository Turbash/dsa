#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<long long> a(n);
    vector<int> b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    sort(b.begin(), b.end());
    vector<long long> prefSum(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        prefSum[i + 1] = prefSum[i] + a[i];
    }
    long long ans = 0;
    int inversons = 0;
    int idx = b[m - 1];
    for(int i=n-1;i>=idx;i--){
        ans+=a[i];
    }
    for (int i = m - 1; i >= 0; i--)
    {
        int idx = b[i] - 1;
        if (i > 0)
        {
            if (inversons)
            {
                long long windSum = prefSum[idx + 1] * -1 - prefSum[b[i - 1]] * -1;
                if (windSum < 0)
                {
                    ans += -1 * windSum;
                    inversons = 0;
                }
                else
                {
                    ans += windSum;
                }
            }
            else
            {
                long long windSum = prefSum[idx + 1] - prefSum[b[i - 1]];
                if (windSum < 0)
                {
                    ans += -1 * windSum;
                    inversons = 1;
                }
                else
                {
                    ans += windSum;
                }
            }
        }
        else
        {
            if (inversons)
            {
                long long windSum = prefSum[idx + 1] * -1;
                if (windSum < 0)
                {
                    ans += -1 * windSum;
                }
                else
                {
                    ans += windSum;
                }
            }
            else
            {
                long long windSum = prefSum[idx + 1];
                if (windSum < 0)
                {
                    ans += -1 * windSum;
                }
                else
                {
                    ans += windSum;
                }
            }
            // cout<<ans<<endl;
        }
    }
    cout << ans << endl;
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
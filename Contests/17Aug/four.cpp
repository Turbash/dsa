#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve()
{
    long long S, q;
    cin >> S >> q;

    vector<long long> divisiors;
    for (long long i = 1; i * i <= S; i++)
    {
        if (S % i == 0)
        {
            divisiors.push_back(i);
        }
    }
    long long div = divisiors.size();
    for (long long i = div - 1; i >= 0; i--)
    {
        if (divisiors[i] * divisiors[i] == S)
        {
            continue;
        }
        long long next = S / divisiors[i];
        divisiors.push_back(next);
    }
    div = divisiors.size();
    vector<long long> prefSum(div + 1, 0);
    long long prev = 0;
    for (long long i = 1; i < prefSum.size(); i++)
    {
        long long w = divisiors[i - 1];
        long long h = S / w;
        long long F = (w - prev) * h;
        prefSum[i] = prefSum[i - 1] + F;
        prev = w;
    }
    for (long long i = 0; i < q; i++)
    {
        long long x, y;
        cin >> x >> y;
        long long ans = 0;
        long long need = (S + y - 1) / y;
        long long j1 = lower_bound(divisiors.begin(), divisiors.end(), need) - divisiors.begin();
        long long theOne = j1 == 0 ? 0 : divisiors[j1 - 1];
        if (x <= theOne)
        {
            cout << x * y << endl;
            continue;
        }
        ans += theOne * y;
        int j = upper_bound(divisiors.begin(), divisiors.end(), x) - divisiors.begin() - 1;
        ans += prefSum[j + 1] - prefSum[j1];
        if (j + 1 < div)
        {
            ans += (x - divisiors[j]) * (S / divisiors[j + 1]);
        }
        cout << ans << endl;
    }
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
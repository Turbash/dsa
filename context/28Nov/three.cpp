#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        vector<long long> q(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> q[i];
        }
        vector<long long> r(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> r[i];
        }
        sort(q.begin(), q.end());
        sort(r.begin(), r.end());
        long long qInd = 0;
        long long ans = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (qInd >= n)
                break;

            if (r[i] >= k)
                continue;

            long long max_allowed_q = (k - r[i]) / (r[i] + 1);

            if (q[qInd] <= max_allowed_q)
            {
                ans++;
                qInd++;
            }
        }
        cout << ans << endl;
    }
}
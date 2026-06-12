#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i].first;
            a[i].second = i;
        }
        sort(a.begin(), a.end());
        vector<int> ans(n, 0);
        long long sum = 0;
        int ind = 0;
        for (int i = 0; i < n; i++)
        {
            long long curr = a[i].first + sum;
            while (ind < n)
            {
                // cout << curr << " " << i << " " << a[ind].second << " " << endl;
                if (a[i].second == a[ind].second)
                {
                    ind++;
                    continue;
                }
                else if (a[ind].first <= curr)
                {
                    curr += a[ind].first;
                    ind++;
                }
                else
                {
                    break;
                }
            }
            ans[a[i].second]=ind-1;
            sum += a[i].first;
        }
        for (int i = 0; i < n - 1; i++)
        {
            cout << ans[i] << " ";
        }
        cout << ans[n - 1] << endl;
    }
}
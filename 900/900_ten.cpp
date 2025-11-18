#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, q;
        cin >> n >> q;
        vector<long long int> a(n);
        vector<long long int> prefix_sum(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            prefix_sum[i + 1] = prefix_sum[i] + a[i];
        }
        for (int i = 0; i < q; i++)
        {
            long long int l, r, k;
            cin >> l >> r >> k;
            long long int new_sum = prefix_sum[n] - (prefix_sum[r] - prefix_sum[l - 1]) + (r - l + 1) * k;
            if (new_sum % 2 == 1)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
}
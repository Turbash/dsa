#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve()
{
    int n, q;
    cin >> n >> q;
    // Your code here
    vi a(n);
    vi b(q);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < q; i++)
    {
        cin >> b[i];
    }
    vi pre(31);
    pre[0] = 1;
    for (int i = 1; i < 31; i++)
    {
        pre[i] = 2 * pre[i - 1];
    }
    int curr = 31;
    for (int i = 0; i < q; i++)
    {
        if (b[i] < curr)
        {
            curr = b[i];
            for (int j = 0; j < n; j++)
            {
                // cout<<a[j]<<" "<<pre[curr]<<" "<<pre[curr-1]<<endl;
                if (a[j] % pre[curr] == 0)
                {
                    a[j] += pre[curr - 1];
                }
            }
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        cout << a[i] << " ";
    }
    cout << a[n - 1] << endl;
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
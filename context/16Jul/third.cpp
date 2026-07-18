#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    if (n == 1)
    {
        if (k == 1)
        {
            cout << "YES" << endl
                 << 0 << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        return;
    }

    long long maxVal = 0;
    int bits = 0;
    int j = n-1;
    while (j > 0)
    {
        bits++;
        j /= 2;
    }
    vector<int> ans(n);
    int kn = k ^ n;
    int ext = kn;
    // cout<<kn<<" "<<ext<<endl;
    int knbits = 0;
    while (kn > 0)
    {
        knbits++;
        kn /= 2;
    }
    // cout<<knbits<<" "<<bits<<endl;
    if (knbits > bits)
    {
        cout << "NO" << endl;
        return;
    }
    int moron = ext ^ (n - 1);
    if(ext == 0)
    {
        cout << "YES" << endl;
        ans[n-1] = 0;
        int now = 1;
        for(int i=0;i<n-1;i++)
        {
            ans[i] = now;
            now++;
        }
    }
    else if (ext > 0 && ext <= n - 1)
    {
        cout << "YES" << endl;
        ans[n - 1] = ext;
        ans[n - 2] = 0;
        int now = 1;
        for (int i = 0; i < n - 2; i++)
        {
            if (now == ext)
            {
                now++;
            }
            ans[i] = now;
            now++;
        }
    }
    else
    {
        if(n==2)
        {
            cout << "NO" << endl;
            return;
        }
        cout << "YES" << endl;
        ans[n - 1] = n - 1;
        ans[n - 2] = moron;
        ans[n - 3] = 0;
        int now = 1;
        for (int i = 0; i < n - 3; i++)
        {
            if (now == moron || now == n - 1)
            {
                now++;
            }
            ans[i] = now;
            now++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << (i == n - 1 ? "" : " ");
    }
    cout << endl;
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
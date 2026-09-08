#include <bits/stdc++.h>

using namespace std;
using vi = vector<long long>;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    int zeros = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 0)
            zeros++;
    }

    if (zeros == 1)
    {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;

    if (zeros == 0)
    {
        for (int i = 0; i < n; i++)
            cout << 'C';
        cout << endl;
        return;
    }

    int c = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            if (c % 2 == 0)
                cout << 'A';
            else
                cout << 'B';

            c++;
        }
        else
        {
            cout << 'C';
        }
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
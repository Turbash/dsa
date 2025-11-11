#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> p(n);
    vector<int> pos(n + 1);

    for (int i = 0; i < n; ++i)
    {
        cin >> p[i];
        pos[p[i]] = i + 1;
    }

    string x;
    cin >> x;

    string s(n, '0');
    if(x == s)
    {
        cout << 0 << endl;
        return;
    }

    int pos_1 = pos[1];
    int pos_n = pos[n];

    if (x[0] == '1' || x[n - 1] == '1')
    {
        cout << -1 << endl;
        return;
    }


    if (x[pos_1 - 1] == '1' || x[pos_n - 1] == '1')
    {
        cout << -1 << endl;
        return;
    }

    cout << 5 << endl;

    cout << 1 << " " << n << endl;

    cout << min(1, pos_1) << " " << max(1, pos_1) << endl;

    cout << min(pos_1, n) << " " << max(pos_1, n) << endl;

    cout << min(1, pos_n) << " " << max(1, pos_n) << endl;

    cout << min(pos_n, n) << " " << max(pos_n, n) << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
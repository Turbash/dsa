#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    string s;

    long long inv = 0;
    long long ones = 0;
    long long zeros = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        if (a[i] == 1)
        {
            ones++;
        }
        else
        {
            inv += ones;
            zeros++;
        }
    }

    cin >> s;

    cout << inv << " ";

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            if (ones > 0)
            {
                inv -= zeros;
                ones--;
            }
        }
        else
        {
            if (zeros > 0)
            {
                inv -= ones;
                zeros--;
            }
        }

        cout << inv << " ";
    }

    cout << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
        solve();
}
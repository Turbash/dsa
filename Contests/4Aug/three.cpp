#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string a, b;
    cin >> a >> b;

    int onesA = 0, onesB = 0;
    int evenA = 0, evenB = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == '1')
        {
            onesA++;
            if (i % 2 == 0)
                evenA++;
        }
        if (b[i] == '1')
        {
            onesB++;
            if (i % 2 == 0)
                evenB++;
        }
    }

    if (onesA == onesB && evenA == evenB)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
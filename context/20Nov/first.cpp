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
        if (n % 2 == 1)
            cout << 0 << endl;
        else
        {
            int ans = 0;
            ans = n / 4 + 1;
            cout << ans << endl;
        }
    }
}
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
        int ans = 0;
        string s = to_string(n);
        int howmany = s.size();
        if (howmany == 1)
        {
            ans += s[0] - '0';
            cout << ans << endl;
            continue;
        }
        else
            ans += 10 + (howmany - 2) * 9;
        ans += s[0] - '1';
        cout << ans << endl;
    }
}
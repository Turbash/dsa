#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long x, y;
        cin >> n >> x >> y;
        string s;
        cin >> s;
        int k = 0;
        for (char c : s)
        {
            if (c == '8')
                k++;
        }
        if (max(abs(x), abs(y)) <= n && abs(x) + abs(y) <= n + k)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
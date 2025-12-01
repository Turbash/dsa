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
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j ++)
            {
                int curr = n * (i - 1) + j;
                int val = curr;
                if (j < n)
                    val += curr + 1;
                if (j > 1)
                    val += curr - 1;
                if (i > 1)
                    val += curr - n;
                if (i < n)
                    val += curr + n;
                // cout << "i: " << i << " j: " << j << " curr: " << curr << " val: " << val << endl;
                ans = max(ans, val);
            }
        }
        cout << ans << endl;
    }
}
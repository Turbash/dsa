#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<int> a(n);
        map<int, int> freq;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            freq[a[i]]++;
        }
        sort(a.begin(), a.end());
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (freq[a[i]] > 0)
            {
                freq[a[i]]--;
                ans++;
                for (int j = a[i] + 1; j <= a[i] + n - i; j++)
                {
                    if (freq[j] > 0)
                    {
                        freq[j]--;
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }
        cout << ans << endl;
    }
}
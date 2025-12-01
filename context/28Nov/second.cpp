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
        vector<int> b;
        for (int i = 0; i < n; i++)
        {
            int ele;
            cin >> ele;
            b.push_back(ele);
        }
        int ans = 0;
        int zeroCount = 0;
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (b[i] == 0)
                zeroCount++;
            sum += b[i];
        }
        long long less = sum - n + 1;
        long long possible = n - zeroCount;
        ans = max(0LL, min(less, possible));
        cout << ans << endl;
    }
}
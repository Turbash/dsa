#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, m;
        cin >> n >> m;
        vector<vector<int>> a(m, vector<int>(n));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[j][i];
            }
        }
        long long ans = 0;
        for(int i=0;i<m;i++){
            sort(a[i].begin(), a[i].end());
        }
        for(int i=0;i<m;i++) {
            long long sum = 0;
            for(int j=0;j<n;j++) {
                ans -= sum;
                ans+= 1LL * a[i][j] * j;
                sum += a[i][j];
            }
        }
        cout << ans << endl;
    }
}
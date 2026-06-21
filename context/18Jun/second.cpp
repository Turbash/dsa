#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve()
{
    int n;
    cin >> n;
    // Your code here
    vi a(n);
    vi b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    vector<bool> used(n, false);
    long long ans = 0;

    for (int j = 0; j < n; j++) {
        int id=-1;
        int left=0;

        for (int i = 0; i < n; i++) {
            if (!used[i]) {
                if (a[i] <= b[j]) {
                    id = i;
                    break;
                }
                
                left++;
            }
        }

        if (id == -1) {
            cout << -1 << endl;
            return;
        }

        used[id] = true;
        ans += left;
    }

    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
        solve();
}
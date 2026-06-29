#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
using vi = vector<int>;
// Ordered set supporting order statistics (order_of_key, find_by_order)
#define Oset tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
void solve()
{
    int n;
    cin >> n;
    // Your code here
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        cin >> a[i].second;
    }
    sort(a.begin(), a.end());
    long long ans = 0;
    Oset s;
    for (int i = 0; i < n; i++)
    {
        ans += i - s.order_of_key(a[i].second);
        s.insert(a[i].second);
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
#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve()
{
    long long n, a, b;
    cin >> n >> a >> b;
    vector<long long> x(n + 1);
    x[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> x[i];
    }
    vector<long long> postSum(n + 1, 0);
    for (int i = n - 1; i >= 0; i--)
    {
        postSum[i] = postSum[i + 1] + x[i+1];
    }
    long long ans = LLONG_MAX;
    for (int i = 0; i <= n; i++)
    {
        long long preCapital = i == 0 ? 0 : a * x[i] + b * x[i];
        long long postCapital = b * (postSum[i] - (n - i) * x[i]);
        // cout<<postSum[i]<<" "<<(n-i)*x[i]<<endl;
        // cout<<"i: "<<i<<" preCapital: "<<preCapital<<" postCapital: "<<postCapital<<endl;
        ans = min(ans, preCapital + postCapital);
    }
    cout << ans << endl;
    // Your code here
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

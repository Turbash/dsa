#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve()
{
    int n, k, a, b;
    cin >> n >> k >> a >> b;
    // Your code here
    vector<pair<long long,long long>> pts(n+1);
    for (int i = 0; i < n; i++)
    {
        cin >> pts[i+1].first >> pts[i+1].second;
    }
    long long dis = LLONG_MAX;
    long long adis = LLONG_MAX;
    long long bdis = LLONG_MAX;
    for(int i=0;i<k;i++){
        long long x=pts[i+1].first;
        long long y=pts[i+1].second;
        long long d = abs(x-pts[b].first)+abs(y-pts[b].second);
        long long d2 = abs(x-pts[a].first)+abs(y-pts[a].second);
        adis = min(adis, d);
        bdis = min(bdis, d2);
        dis=min(dis,  adis+bdis);
    }
    long long d3=abs(pts[a].first-pts[b].first)+abs(pts[a].second-pts[b].second);
    dis = min(dis, d3);
    cout<<dis<<endl;
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
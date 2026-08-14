#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve()
{
    int n, m, x, y;
    cin >> n >> m >> x >> y;

    vector<int> a(x);
    vector<int> b(y);
    for (int i = 0; i < x; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < y; i++)
    {
        cin >> b[i];
    }
    long long ans = 0;

    int i = 0, j = 0;
    set<int> onlya;
    set<int> onlyb;
    set<int> common;
    while (i < x && j < y)
    {
        if (a[i] == b[j])
        {
            common.insert(a[i]);
            i++;
            j++;
        }
        else if (a[i] < b[j])
        {
            onlya.insert(a[i]);
            i++;
        }
        else
        {
            onlyb.insert(b[j]);
            j++;
        }
    }

    while (i < x)
    {
        onlya.insert(a[i]);
        i++;
    }

    while (j < y)
    {
        onlyb.insert(b[j]);
        j++;
    }
    vector<int> both;
    for (int i = 0; i < x; i++)
    {
        both.push_back(a[i]);
    }
    for (int i = 0; i < y; i++)
    {
        if(common.find(b[i])==common.end())
        {
            both.push_back(b[i]);
        }
    }
    sort(both.rbegin(), both.rend());
    int total = 0;
    int froma= 0;
    int fromb = 0;
    for(int i=0;i<both.size();i++){
        if(total>=n+m-1){
            break;
        }
        if(common.find(both[i])!=common.end()){
            ans+=both[i];
            total++;
        }
        else if(onlya.find(both[i])!=onlya.end() && froma<n){
            ans+=both[i];
            froma++;
            total++;
        }
        else if(onlyb.find(both[i])!=onlyb.end() && fromb<m){
            ans+=both[i];
            fromb++;    
            total++;
        }
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
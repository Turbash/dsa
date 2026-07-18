#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve()
{
    long long n, q;
    cin >> n >> q;
    // Your code here
    vector<long long> a(n);
    long long ans = 1;
    vector<long long> lengths(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<long long> lets = a;
    sort(lets.begin(), lets.end());
    if(lets == a){
        cout << 0 << endl;
        return;
    }
    for(int i=0;i<n;i++){
        long long l = 0;
        long long now = i;
        while(now > 0){
            now/=2;
            l++;
        }
        lengths[i] = l;
    }
    map<int, vector<long long>> mp;
    int i=n-1;
    while(i>=0){
        vector<long long> temp;
        long long t = lengths[i];
        while(i>=0 && lengths[i] == t){
            temp.push_back(lets[i]);
            i--;
        }
        mp[t] = temp;
    }
    i= n-1;
    while(i>=0){
        long long th = (lengths[i] == 0 ? 0 : (1LL << (lengths[i]-1)));
        vector<long long> temp;
        long long t = lengths[i];
        while(i>=0 && lengths[i] == t){
            temp.push_back(a[i]);
            i--;
        }
        sort(temp.begin(), temp.end(), greater<long long>());
        if(temp!= mp[t]){
            ans=max(ans, th);
            break;
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
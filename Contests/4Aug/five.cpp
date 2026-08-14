 #include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    int n;
    cin >> n;
    // Your code here
    vector<pair<long long,int>> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i].first;
        a[i].second=i;
    }
    sort(a.begin(),a.end());
    if(a[0].first!=0){
        cout<<-1<<endl;
        return;
    }
    vector<long long> ans(n);
    long long now = 1;
    int i = 0;
    long long till = 0;
    while(i<n){
        int j =i;
        while(j<n && a[j].first==a[i].first) j++;
        if(j<n){
            long long needed = a[j].first;
            long long req = needed - till;
            long long many = j-i;
            if(req%many!=0){
                cout<<-1<<endl;
                return;
            }
            long long pereach = req/many;
            if(pereach<now){
                cout<<-1<<endl;
                return;
            }
            // cout<<pereach<<" "<<now<<endl;
            for(int k=i;k<j;k++){
                ans[a[k].second]=pereach;
            }
            now = pereach + 1;
        }else{
            for(int k=i;k<j;k++){
                ans[a[k].second]=now;
            }
        }
        if(j<n)
            till = a[j].first;
        i=j;
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}
#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    long long n, k, m;
    cin >> n >> k >> m;
    if(k>m){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    vector<long long> ans;
    for(int i=0;i<k-1;i++){
        ans.push_back(1);
    }

        ans.push_back(m-k+1);
    for(int i=0;i<n-k;i++){
        ans.push_back(1);
    }
    for(int i=0;i<ans.size();i++){
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
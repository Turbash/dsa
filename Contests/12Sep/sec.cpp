#include<bits/stdc++.h>

using namespace std;
using ll = long long;
using vi = vector<long long>;

void solve() {
    long long n,k;
    cin>>n>>k;
    if(k<n || k>=2*n){
        cout<<-1<<endl;
        return;
    }
    vector<vi> ans(n, vi(n));
    int th = 2* n - k;
    int now = 1;
    for(int i=0;i<th;i++){
        ans[i][i] = now;
        now ++;
    }
    for(int i=1;i<n;i++){
        ans[0][i] = now;
        now++;
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j & i<th){
                continue;
            }
            ans[i][j]=now;
            now++;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}
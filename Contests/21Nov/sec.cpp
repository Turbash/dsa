#include<bits/stdc++.h>

using namespace std;
using ll = long long;
using vi = vector<long long>;

void solve() {
    long long n, m;
    cin>>n>>m;
    vi f(n, 0);
    vi d(m, 0);
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        for(int j=0;j<m;j++){
            if(s[j]=='o'){
                f[i]=1;
                d[j]=1;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(f[i]==0){
            cout<<"Faucet"<<" "<<i+1<<endl;
            return;
        }
    }
    for(int i=0;i<m;i++){
        if(d[i]==0){
            cout<<"Drain"<<" "<<i+1<<endl;
            return;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
}
#include<bits/stdc++.h>

using namespace std;
using ll = long long;
using vi = vector<long long>;

void solve() {
    long long n;
    cin>>n;
    vi c(n);
    for(int i=0;i<n;i++){
        cin>>c[i];
    }
    vi dis(n, LLONG_MAX);
    ll prev = -1;
    ll dist = LLONG_MAX;
    for(int i=1;i<n;i++){
        if(c[i]!=c[i-1]){
                prev = c[i-1];
                dist = 1;
        }else{
            if(prev!=-1){
                dist++;
            }
        }
        dis[i]=dist;
    }
    prev = -1;
    dist = LLONG_MAX;
    for(int i=n-2;i>=0;i--){
        if(c[i]!=c[i+1]){

                prev = c[i+1];
                dist = 1;
        }else{
            if(prev!=-1){
                dist++;
            }
        }
        dis[i]=min(dis[i], dist);
    }
    for(int i=0;i<n;i++){
        cout<<dis[i]<<" ";
    }
    cout<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
}
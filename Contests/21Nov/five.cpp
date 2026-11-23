#include<bits/stdc++.h>

using namespace std;
using ll = long long;
using vi = vector<long long>;

void dfs(ll u,ll prevc, vector<vector<pair<ll, ll>>> &adj, vector<ll> &dist) {
    for(auto &[v, c]: adj[u]){
        if(prevc!=c){
            if(dist[v]>dist[u]+1){
                dist[v] = dist[u]+1;
                dfs(v, c, adj, dist); 
            }
        }
    }
}

void solve() {
    long long n, m;
    cin>>n>>m;
    vector<vector<pair<ll, ll>>> adj(n+1);
    for(int i=0;i<m;i++){
        long long u, v,c;
        cin>>u>>v>>c;
        adj[v].emplace_back(u, c);
    }

    vector<ll> dist(n+1, LLONG_MAX);
    dist[n] = 0;
    dfs(n, -1, adj, dist);
    if(dist[0]==LLONG_MAX){
        cout<<-1<<endl;
    }else{
        cout<<dist[n]<<endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
}
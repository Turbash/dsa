#include<bits/stdc++.h>

using namespace std;
using ll = long long;
using vi = vector<long long>;


void solve() {
    long long n, m;
    cin>>n>>m;
    vector<vector<pair<ll, ll>>> adj(n+1);
    for(int i=0;i<m;i++){
        long long u, v,c;
        cin>>u>>v>>c;
        adj[u].emplace_back(v, c);
    }

    vi dist(n+1, LLONG_MAX);
    queue<tuple<ll,ll,ll>> q;
    dist[1] = 0;
    q.push({1, 0, 0});
    vi cnt(n+1, 0);
    vi col(n+1, 0);
    while(!q.empty()) {
        ll u = std::get<0>(q.front());
        ll d = std::get<1>(q.front());
        ll c = std::get<2>(q.front());
        // cout<<u<<" "<<d<<" "<<c<<endl;
        q.pop();

        for(auto [v, w]: adj[u]) {
            if(w == c)
                continue;
            if(cnt[v] == 0) {
                dist[v] = d + 1;
                q.push({v, d + 1, w});
                cnt[v]++;
                col[v] = w;
            }
            else if(cnt[v]<2 && col[v] != w) {
                q.push({v, d + 1, w});
                cnt[v]++;
                col[v] = w;
            }
        }
    }
    if(dist[n]==LLONG_MAX){
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
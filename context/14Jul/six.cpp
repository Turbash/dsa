#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    int n;
    cin >> n;
    
    vi p(n + 1, 0);
    vector<vi> adj(n + 1);
    
    for(int i=2;i<=n;i++){
        cin >> p[i];
        adj[p[i]].push_back(i);
    }
    
    vi a(n + 1, 0);
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }

    bool ok = true;

    auto dfs = [&](auto& self, int u) -> pair<int, int> {
        if(adj[u].empty()){
            return {a[u], a[u]};
        }

        vector<pair<int, int>> ranges;
        int mn = 1e9, mx = -1e9;

        for(int v : adj[u]){
            pair<int, int> res = self(self, v);
            if(res.first == -1){
                ok = false;
                return {-1, -1};
            }
            ranges.push_back(res);
            mn = min(mn, res.first);
            mx = max(mx, res.second);
        }

        if(!ok) return {-1, -1};

        int m = ranges.size();
        int matches = 0;
        
        for(int i=0;i<m;i++){
            int nxt = (i + 1) % m;
            if(ranges[i].second + 1 == ranges[nxt].first){
                matches++;
            }
        }

        if(matches == m - 1 || m == 1){
            return {mn, mx};
        }else{
            ok = false;
            return {-1, -1};
        }
    };

    dfs(dfs, 1);
    
    if(ok){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}
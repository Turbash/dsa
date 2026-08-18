#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void dfs(int node, vector<vector<int>>& children, vector<int>& dams, vector<int>& visited, int& total, int limit){
    visited[node]=1;
    for(int i=0;i<children[node].size();i++){
        int adj = children[node][i];
        if(!visited[adj]){
            dfs(adj, children, dams,visited, total, limit);
        }
    }
    if(dams[node] && total<limit){
        cout<<node<<" ";
        total++;
    }
}

void solve() {
    int n;
    cin >> n;
    vector<int> parent(n+1);
    parent[1]=1;
    vector<vector<int>> children(n+1);
    for(int i=2;i<n+1;i++){
        cin>>parent[i];
        children[parent[i]].push_back(i);
    }
    int m;
    cin>>m;
    vector<int> dams(n+1, 0);
    for(int i=0;i<m;i++){
        int dam;
        cin>>dam;
        dams[dam] = 1;
    }
    int total = 0;
    int limit  = m-1;
    vector<int> visited(n+1, 0);
    cout<<m-1<<" ";
    dfs(1, children, dams, visited, total, limit);
    cout<<endl;
    // Your code here
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}
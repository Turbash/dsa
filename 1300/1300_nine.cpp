#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    int n;
    cin >> n;
    // Your code here
    vector<vi> v(n);
    map<int, int> mp;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        vi a(x);
        for(int j=0;j<x;j++){
            int y;
            cin >> y;
            a[j] = y;
            mp[y]++;
        }
        v[i] = a;
    }
    for(int i=0;i<n;i++){
        int all = 1;
        for(int j=0;j<v[i].size();j++){
            if(mp[v[i][j]] == 1){
                all = 0;
                break;
            }
        }
        if(all){
            cout << "Yes\n";
            return;
        }
    }
    cout << "No\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}
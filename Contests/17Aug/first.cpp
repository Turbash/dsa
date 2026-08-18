#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    int n, m;
    cin >> n>> m;
    vector<string> og(n);
    vector<string> abb(m);
    for(int i=0;i<n;i++){
        cin>>og[i];
    }
    vector<int> allowed(26, 0);
    for(int i=0;i<m;i++){
        cin>>abb[i];
    }
    for(int i=0;i<n;i++){
        int now = int(og[i][0] - 'a');
        allowed[now]=1;
    }
    int valid = 1;
    for(int i=0;i<m;i++){
        for(int j=0;j<abb[i].size();j++){
            int now = int(abb[i][j] - 'A');
            if(!allowed[now]){
                valid = 0;
                break;
            }
        }
    }
    if(valid)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    // Your code here
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}
#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    int n;
    cin >> n;
    // Your code here
    vector<int> color(n + 2, 1);
    if(n<3){
        cout<<1<<endl;
        for(int i=0;i<n;i++){
            cout<<1<<" ";
        }
        cout<<endl;
        return;
    }
    for(int i=2;i*i<=n+1;i++){
        if(color[i]==1){
            for(int j=i*i;j<=n+1;j+=i){
                color[j] = 2;
            }
        }
    }
    cout<<2<<endl;
    for(int i=2;i<=n+1;i++){
        cout<<color[i]<<" ";
    }
    cout<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    solve();
}
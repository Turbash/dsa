#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

int ask (int u, int v, int d) {
    cout<<"? "<<u+1<<" "<<v+1<<" "<<d<<endl;
    cout.flush();
    int ans;
    cin>>ans;
    return ans;
}

void solve() {
    int n;
    cin >> n;
    // Your code here
    int u = 0;
    int dist = 0;
    for(int i =1;i<n && dist!=n-1;i++){
        if(ask(0, i, dist+1)){
            u = i;
            dist++;
            while(dist!=n-1 && ask(0,i,dist+1))
                dist++;
        }
    }
    int v = 0;
    for(int i=0; i<n && dist!=n-1; i++){
        if(i==u)
            continue;
        if(ask(u, i, dist+1)){
            v = i;
            dist++;
            while(dist!=n-1 && ask(u,i,dist+1))
                dist++;
        }
    }
    cout<<"! "<<u+1<<" "<<v+1<<" "<<dist<<endl;
    cout.flush();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}
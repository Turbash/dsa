#include<bits/stdc++.h>

using namespace std;
using ll = long long;
using vi = vector<long long>;

void solve() {
    long long n,k;
    cin>>n>>k;

    vi a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    if(k==1){
        cout<<-1<<endl;
        return;
    }
    int fr = n-k + 1;
    int now = 0;
    int idx = 0;
    vi found(n, 0);
    for(int i=0;i<fr;i++) {
        found[a[i]] = 1;
        if(a[i] == now) {
            while(found[now]) now++;
        }
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}
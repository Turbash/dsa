#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    int n,c;
    cin >> n>>c;
    vi a(n);
    vi b(n);
    vi cl(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    cl=a;
    int ans = c;
    vi d(n);
    d=b;
    sort(b.begin(), b.end());
    sort(a.begin(), a.end());
    int falt = 0;
    for(int i=0;i<n;i++){
        if(a[i]>=b[i]){
            ans+=a[i]-b[i];
        }
        else{
            falt=1;
            break;
        }
    }
    if(falt==1){
        cout << -1 << endl;
        return;
    }
    int alt = 0;
    falt = 0;
    for(int i=0;i<n;i++){
        if(cl[i]>=d[i]){
            alt+=cl[i]-d[i];
        }
        else{
            falt=1;
            break;
        }
    }
    if(falt==0){
        cout << min(ans,alt) << endl;
    }
    else{
        cout << ans << endl;
    }
    // Your code here
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}
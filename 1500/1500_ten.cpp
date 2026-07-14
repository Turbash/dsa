#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    long long xr = 0;
    for(int i=0;i<n;i++){
        xr ^= a[i];
    }
    if(xr == 0){
        cout << "YES" << endl;
        return;
    }
    long long isThere = 0;
    long long curr = 0;
    for(int i=0;i<n;i++){
        curr ^= a[i];
        if(curr == xr){
            isThere++;
            curr = 0;
        }
    }
    if(isThere>=2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    // Your code here
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}
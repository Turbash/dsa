#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    int n;
    cin >> n;
    // Your code here
    vi a(n);
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    int ones = 0;
    int twos = 0;
    int threes = 0;
    int idx = 0;
    for(int i=0; i<n; i++) {
        if(a[i]==1) {
            ones++;
        }
        else if(a[i]==2) {
            twos++;
        }
        else if(a[i]==3) {
            threes++;
        }
        if(ones>=twos+threes){
            idx = i+1;
            while(idx<n && (a[idx]==3 && ones>=twos+threes+1)){
                idx++;
                threes++;
            }
            break;
        }
    }
    if(idx==0 || idx==n){
        cout<< "NO" << endl;
        return;
    }
    ones = 0;
    twos = 0;
    threes = 0;
    int lf = idx;
    for(int l=idx;l<n;l++){
        if(a[l]==1) {
            ones++;
        }
        else if(a[l]==2) {
            twos++;
        }
        else if(a[l]==3) {
            threes++;
        }
        if(threes<=ones+twos){
            idx = l+1;
            break;
        }
    }
    if(idx == lf || idx == n){
        cout<< "NO" << endl;
        return;
    }
    cout<< "YES" << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}
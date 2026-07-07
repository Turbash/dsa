#include<bits/stdc++.h>
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
    int twos = 0;
    for(int i=0; i<n; i++) {
        if(a[i]>=3){
            cout << "YES" << endl;
            return;
        }
        else if(a[i]==2) {
            twos++;
        }
        if(twos>=2) {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}
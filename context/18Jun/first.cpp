#include <bits/stdc++.h>

using namespace std;
using vi = vector < int > ;

void solve() {
    int n;
    cin >> n;
    vi a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int ans = INT_MAX;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[j] > a[i]) {
                a[j]=a[i];
            }
        }
  
    }
    ans=accumulate(a.begin(),a.end(),0);
    cout << ans << endl;
    // Your code here
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}
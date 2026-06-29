#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    long long n;
    cin >> n;
    // Your code here
    long long ans = 0;
    for(int i=1;i<=n;i++){
        long long add = n/i;
        long long more = add*add;
        ans+=more;
    }
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}
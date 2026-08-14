#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    long long a, b, c;
    cin >> a >> b >> c;
    // Your code here
    vector<long long> ab = {a, b, c};
    sort(ab.begin(), ab.end());
    long long ans = ab[2] - ab[0];
    while(ab[0] + ab[1] < ab[2]){
        ab[2] = ab[0] + ab[1];
        ans = ab[2] - ab[0];
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
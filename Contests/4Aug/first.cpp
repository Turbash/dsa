#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    if(a==b || b==c || a==c){
        cout<<0<<endl;
        return;
    }
    vector<int> v = {a, b, c};
    sort(v.begin(), v.end());
    int f = v[1]-v[0];
    int s = v[2]-v[1];
    cout<<min(f, s)<<endl;
    // Your code here
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}
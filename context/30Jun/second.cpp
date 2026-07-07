#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    long long n;
    cin >> n;
    // Your code here
    long long pro = 1;
    string s = to_string(n);
    int l = s.length();
    long long num = pow(10, l) + 1;
    cout<<num<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}
#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    int n, m;
    cin >> n >> m;
    vi a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> trailing;
    int totalDigits = 0;
    for (int i = 0; i < n; i++) {
        string s = to_string(a[i]);
        int cnt = 0;
        for (int j = (int)s.size() - 1; j >= 0; j--) {
            if (s[j] == '0') {
                cnt++;
            } else {
                break;
            }
        }
        trailing.push_back(cnt);
        totalDigits += (int)s.size();
    }
    sort(trailing.begin(), trailing.end(), greater<int>());
    for(int i=0;i<n;i+=2) {
        totalDigits -= trailing[i];
    }
    if(totalDigits<=m) {
        cout << "Anna"<<endl;
    } else {
        cout << "Sasha"<<endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}
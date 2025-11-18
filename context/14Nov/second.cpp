#include<bits/stdc++.h>

using namespace std;

void solve() {
    string s;
    cin >> s;
    int n = s.length();

    bool infinite = false;
    for (int i = 0; i < n - 1; ++i) {
        bool can_go_right = (s[i] == '>') || (s[i] == '*');
        bool can_go_left = (s[i+1] == '<') || (s[i+1] == '*');
        
        if (can_go_right && can_go_left) {
            infinite = true;
            break;
        }
    }

    if (infinite) {
        cout << -1 << endl;
        return;
    }

    vector<int> dp_left(n, 0);
    for (int i = 0; i < n; ++i) {
        if (s[i] != '>') {
            dp_left[i] = 1 + (i > 0 ? dp_left[i - 1] : 0);
        }
    }

    vector<int> dp_right(n, 0);
    for (int i = n - 1; i >= 0; --i) {
        if (s[i] != '<') {
            dp_right[i] = 1 + (i < n - 1 ? dp_right[i + 1] : 0);
        }
    }

    int max_time = 0;
    for (int i = 0; i < n; ++i) {
        max_time = max(max_time, dp_left[i]);
        max_time = max(max_time, dp_right[i]);
    }

    cout << max_time << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
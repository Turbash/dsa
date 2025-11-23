#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    if (!(cin >> n)) return; 

    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    long long min_diff;

    long long first = a[0];
    long long last = a[n - 1];

    if (first != -1 && last != -1) {
        min_diff = abs(last - first);
    } else if (first != -1 && last == -1) {
        min_diff = 0;
        a[n - 1] = first;
    } else if (first == -1 && last != -1) {

        min_diff = 0;
        a[0] = last;
    } else {
 
        min_diff = 0;
        a[0] = 0;
        a[n - 1] = 0;
    }

    for (int i = 1; i < n - 1; ++i) {
        if (a[i] == -1) {
            a[i] = 0;
        }
    }


    cout << min_diff << endl;

    for (int i = 0; i < n; ++i) {
        cout << a[i] << (i == n - 1 ? "" : " ");
    }
    cout << endl;
}

int main() {
    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        solve();
    }

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, q;
        cin >> n >> q;
        vector < long long > a(n);
        vector < long long > k(q);
        vector < long long > pre(n + 1, 0);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < q; i++) {
            cin >> k[i];
        }
        vector < long long > to(n);
        to[0] = a[0];
        for (int i = 1; i < n; i++) {
            to[i] = max(a[i], to[i - 1]);
        }
        for (int i = 1; i <= n; i++) {
            pre[i] = a[i - 1] + pre[i - 1];
        }
        for (int i = 0; i < q; i++) {
            int ind = upper_bound(to.begin(), to.end(), k[i]) - to.begin();
            // cout << "Ind" << ind << endl;
            if (i == q - 1) {
                cout << pre[ind];
            }
            else {
                cout << pre[ind] << " ";
            }
        }
        cout << endl;
    }
}
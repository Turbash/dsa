#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <set>

using namespace std;

long long solve_linear(vector<int>& b) {
    int m = b.size();
    if (m <= 1) {
        return 0;
    }

    vector<long long> val(m);
    for (int i = 0; i < m; ++i) {
        val[i] = b[i];
    }

    vector<int> L(m), R(m);
    for (int i = 0; i < m; ++i) {
        L[i] = i - 1;
        R[i] = i + 1;
    }
    R[m - 1] = -1; 

    vector<bool> active(m, true);

    set<pair<long long, int>> pq;

    for (int i = 0; i < m - 1; ++i) {
        pq.insert({max(val[i], val[i + 1]), i});
    }

    long long linear_cost = 0;
    int merges_done = 0;

    while (merges_done < m - 1) {
        auto it = pq.begin();
        long long cost = it->first;
        int i = it->second;
        pq.erase(it);

        int j = R[i];

        if (!active[i] || j == -1 || !active[j]) {
            continue;
        }

        linear_cost += cost;
        merges_done++;

        val[i] = max(val[i], val[j]);
        
        active[j] = false;
        int new_R = R[j]; 
        int old_L = L[i];

        R[i] = new_R;
        if (new_R != -1) {
            L[new_R] = i;
        }

        if (new_R != -1) {
            pq.insert({max(val[i], val[new_R]), i});
        }
        
        if (old_L != -1) {
            pq.insert({max(val[old_L], val[i]), old_L});
        }
    }

    return linear_cost;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    
    int max_val = -1;
    int max_idx = -1;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] > max_val) {
            max_val = a[i];
            max_idx = i;
        }
    }

    if (n == 2) {
        cout << max(a[0], a[1]) << "\n";
        return;
    }

    vector<int> b;
    for (int i = 1; i < n; ++i) {
        b.push_back(a[(max_idx + i) % n]);
    }

    long long C_chain = solve_linear(b);

    cout << C_chain + max_val << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

long long solve() {
    int n;
    cin >> n;

    vector<long long> a(n);
    long long total_sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        total_sum += a[i];
    }

    vector<long long> P(n + 1, 0);
    for (int i = 0; i < n; ++i) {
        P[i + 1] = P[i] + a[i];
    }

    vector<long long> C(n + 1);
    vector<long long> PrefMaxC(n + 1);

    C[1] = P[0] - 1LL * 1 + 1LL * 1; 
    PrefMaxC[1] = C[1];

    for (int l = 2; l <= n; ++l) {
        C[l] = P[l - 1] - (long long)l * l + l;
        PrefMaxC[l] = max(PrefMaxC[l - 1], C[l]);
    }

    long long max_gain = 0;

    for (int r = 1; r <= n; ++r) {
        long long const_r = (long long)r * r + r - P[r];
        
        long long best_l_term = PrefMaxC[r];
        
        long long current_gain = const_r + best_l_term;
        
        max_gain = max(max_gain, current_gain);
    }

    return total_sum + max_gain;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cout << solve() << "\n";
    }
    return 0;
}
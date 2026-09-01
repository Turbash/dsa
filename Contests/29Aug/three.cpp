#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    int n, m;
    cin >> n >> m;
    
    vi a(n);
    long long sum = 0;
    vector<long long> cnt(m + 2, 0);
    
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
        cnt[a[i]]++;
    }
    
    vector<long long> pref(m + 2, 0);
    for(int i = 1; i <= m; i++){
        pref[i] = pref[i - 1] + cnt[i];
    }
    
    vector<long long> ans;
    
    for(int k = 1; k <= m; k++){
        if(k >= 20 || (1LL << k) - 1 >= m){
            ans.push_back(sum);
            continue;
        }
        
        long long lim = (1LL << k) - 1;
        long long best = 0;
        
        for(long long v = 1; v <= m; v++){
            long long cur = 0;
            
            for(long long j = 1; j < lim && j * v <= m; j++){
                long long l = j * v;
                long long r = (j + 1) * v - 1;
                
                if(l > m) continue;
                if(r > m) r = m;
                
                if(l <= r) {
                    cur += (pref[r] - pref[l - 1]) * j;
                }
            }
            
            long long rem = lim * v;
            if(rem <= m){
                cur += (pref[m] - pref[rem - 1]) * lim;
            }
            
            long long exact = (lim + 1) * v;
            if(exact <= m){
                cur += cnt[exact];
            }
            
            if(cur > best){
                best = cur;
            }
        }
        
        ans.push_back(best);
    }
    
    for(int i = 0; i < m; i++){
        cout << ans[i] << (i == m - 1 ? "" : " ");
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
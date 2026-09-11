#include <bits/stdc++.h>
using namespace std;

using vi = vector<int>;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    int presum = 0;
    int now = 0;
    int ans = 0;
    if(n==1 && s[0] =='0'){
        cout<<-1<<endl;
        return;
    } 
    
    if (s[0] == '-') {
        presum = -1;
        now = -1;
        ans = 1;
    } else if (s[0] == '+') {
        presum = 1;
        now = 1;
        ans = 1;
    }

    for (int i = 1; i < n; i++) {
        if (s[i] == '-') {
            if (presum < 0) {
                if (presum + 1 < 0) {
                    now = 1;
                    presum++;
                } else {
                    now = -1;
                    presum--;
                }
            } else {
                now = -(presum + 1);
                presum = -1;
            }
        } else if (s[i] == '+') {
            if (presum > 0) {
                if (presum - 1 > 0) {
                    now = -1;
                    presum--;
                } else {
                    now = 1;
                    presum++;
                }
            } else {
                now = -presum + 1;
                presum = 1;
            }
        } else {
            if(presum == 0){
                cout<<-1<<endl;
                return;
            }
            now = -presum; 
            presum = 0;
        }
        cout<<now<<endl;
        ans = max(abs(now), ans);
    }
    
    cout << ans << "\n";
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

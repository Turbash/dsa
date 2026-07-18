#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    int n;
    cin >> n;
    string s;
    cin>>s;
    int maxSeq = 0;
    int curr = 0;
    for(int i=0;i<n;i++){
        if(s[i]=='#'){
            curr++;
            maxSeq = max(maxSeq,curr);
        }else{
            curr = 0;
        }
    }
    int ans = (maxSeq+1)/2;
    cout << ans << endl;
    // Your code here
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}
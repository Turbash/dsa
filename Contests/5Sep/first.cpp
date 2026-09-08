#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    int n, k;
    cin >> n>>k;
    string s;
    cin>>s;
    int i = 0;
    int ans = 0;
    for(int i=0;i<n;i+=k){
        int no = 1;
        for(int j=0;j<k;j++){
            if(s[j+i]=='0'){
                no = 0;
                break;
            }
        }
        if(no)
            ans++;
    }
    cout<<ans<<endl;
    // Your code here
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}
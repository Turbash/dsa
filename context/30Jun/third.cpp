#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    int n;
    cin >> n;
    // Your code here
    string s;
    cin >> s;
    
    char prev = ' ';
    string st;
    for(int i=0;i<n;i++){
        if(s[i]==prev){
            continue;
        }else{
            st+=s[i];
            prev = s[i];
        }
    }
    if(st.size() != 2) {
         cout<<1<<endl;
    }else{
        cout<<2<<endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}
#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    int n;
    cin >> n;
    string s;
    cin>>s;
    int canOne = 0;
    int canTwo = 0;
    int numBlocks = 1;
    char curr = s[0];
    int now = 1;
    for(int i=1;i<n;i++){
        if(s[i]!=curr){
            numBlocks++;
            curr = s[i];
            if(now==1 && i!=1) canOne=1;
            now = 1;
        }
        else{
            now++;
        }
    }
    for(int i = 1;i<n-1;i++){
        if(s[i-1]!= s[i] && s[i]!=s[i+1] && s[i-1]==s[i+1]){
            canTwo = 1;
            break;
        }
    }
    int ans = numBlocks;
    if(canTwo) ans-=2;
    else if(canOne) ans--;
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
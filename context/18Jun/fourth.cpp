#include <bits/stdc++.h>

using namespace std;
using vi = vector < int > ;

void solve() {
    int n;
    cin >> n;
    string s;
    cin>>s;
    long long sum = n;
    for(int i=1;i<n;i++){
        if(s[i-1]==s[i]){
            long long l= i;
            long long r = n-i;
            sum += l * r;
        }
    }
    cout << sum << endl;
    // Your code here
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}
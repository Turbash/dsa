#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<long long> a(n);
    vector<long long> b(m);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    long long timea = 0;
    long long timeb = 0;
    timea = a[0] + n-1;
    timeb = b[0] + m-1;
    if(timeb > timea){
        cout<<2<<endl;
    }
    else
        cout<<1<<endl;
    // Your code here
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}
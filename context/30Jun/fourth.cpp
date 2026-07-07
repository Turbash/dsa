#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    int n;
    cin >> n;
    // Your code here
    vector<long long> a(n);
    vector<long long> b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    for(int i=n-1;i>=0;i--){
        if(a[i] > b[i]){
            if(i-1 < 0){
                cout<<"NO"<<endl;
                return;
            }
            long long diff = a[i] - b[i];
            a[i-1] += diff;
        }
    }
    cout<<"YES"<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}
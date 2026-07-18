#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    int n;
    cin >> n;
    vi a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    if(n%2==1){
        cout<<"NO"<<endl;
        return;
    }
    if(n==2){
        if(a[0]==a[1]){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
        return;
    }
    int n1s = 0;
    int negs = 0;
    for(int i=0;i<n;i++){
        if(a[i]==1){
            n1s++;
        }
        else{
            negs++;
        }
    }
    // cout<<"n1s: "<<n1s<<" negs: "<<negs<<endl;
    if(abs((n1s-negs) / 2)%2==1){
        cout<<"NO"<<endl;
    }
    else
        cout<<"YES"<<endl;
    // Your code here
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}
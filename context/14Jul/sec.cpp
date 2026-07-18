#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    long long n;
    cin >> n;
    vector<long long> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n-1;i++){
        if(a[i]>=i+1){
            a[i+1] = a[i+1] + a[i] - i - 1;
        }else{
            cout<< "NO" << endl;
            return;
        }
        a[i]=i+1;
    }
    // for(int i=0;i<n;i++){
    //     cout<<a[i]<<" ";
    // }
    int isStri = 1;
    for(int i=0;i<n-1;i++){
        if(a[i]>=a[i+1]){
            isStri = 0;
            break;
        }
    }
    if(isStri)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    // Your code here
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}
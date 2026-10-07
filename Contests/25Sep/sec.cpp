#include<bits/stdc++.h>

using namespace std;
using ll = long long;
using vi = vector<long long>;

void solve() {
    long long n;
    cin>>n;
    vi a(n);
    vi freq(101, 0);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ll largest=0;
    for(int i=0;i<n;i++){
        freq[a[i]]++;
        largest = max(a[i], largest);
    }
    ll total = n;
    for(int i=0;i<freq[largest];i++){
        cout<<largest<<" ";
    }
    total-= freq[largest];
    while(total>0){
        for(int i=largest-1;i>=1;i--){
            if(freq[i]){
                cout<<i<<" ";
                freq[i]--;
                total--;
            }
        }
        // cout<<total<<endl;
        // return;
    }
    cout<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}
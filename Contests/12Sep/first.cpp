#include<bits/stdc++.h>

using namespace std;
using ll = long long;
using vi = vector<long long>;

void solve() {
    long long n;
    cin>>n;
    vi a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ones  =0;
    int zeroes = 0;
    for(int i=0;i<n;i++){
        if(a[i]){
            ones++;
        }else{
            zeroes++;
        }
    }
    if(zeroes>ones){
        cout<<"Elsie"<<endl;
    }else{
        cout<<"Bessie"<<endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}
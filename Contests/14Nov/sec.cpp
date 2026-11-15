#include<bits/stdc++.h>

using namespace std;
using ll = long long;
using vi = vector<long long>;

void solve() {
    long long n;
    cin>>n;
    vi a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    sort(a.begin(), a.end());
    if(a[n-1]!=9){
        cout<<-1<<endl;
    }else{
        cout<<a[0]<<endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
}
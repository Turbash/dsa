#include<bits/stdc++.h>

using namespace std;
using ll = long long;
using vi = vector<long long>;

void solve() {
    long long a,b;
    cin>>a>>b;
    long long sum = a*2+b;
    if(sum%2){
        cout<<"NO"<<endl;
    }
    else{
        for(int i=0;i<=a;i++){
            for(int j=0;j<=b;j++){
                long long now = 2*i + j;
                if(now*2==sum){
                    cout<<"YES"<<endl;
                    return;
                }
            }
        }
        cout<<"NO"<<endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
}
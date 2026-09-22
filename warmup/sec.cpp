#include<bits/stdc++.h>

using namespace std;
using ll = long long;
using vi = vector<long long>;

void solve() {
    long long n;
    cin>>n;
    if(n==1){
        cout<<"1 = 1"<<endl;
    }
    else{
        long long sum = 0;
        for(int i = 1;i<=n;i++){
            cout<<i<<" ";
            if(i!=n){
                cout<<"+ ";
            }
            sum+=i;
        }
        cout<<"= "<<sum<<endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
}
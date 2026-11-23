#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<long long>;


int main() {
    vi dp(1000001, 0);
    for(int i=1;i<=6;i++) {
        dp[i] = 1;
    }
    for(int i=0;i<1000001;i++){
        for(int j=1;j<=6;j++) {
            if(i+j<=1000000) {
                dp[i+j] = (dp[i+j] + dp[i]) % 1000000007;
            }
        }
    }
    int n;
    cin>>n;
    cout<<dp[n]<<endl;
}
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<long long>;
 
ll mod = 1e9 + 7;

int main()
{
    ll n,x;
    cin >> n >> x; 

    vi h(n);
    vi s(n);
    for(int i=0;i<n;i++){
        cin>>h[i];
    }
    for(int i=0;i<n;i++){
        cin>>s[i];
    }

    vi dp(x+1, 0);

    for(int i=0;i<n;i++) {
        for(int j=x;j>=h[i];j--){
            dp[j] = max(dp[j-h[i]] +s[i], dp[j]);
        }
    }

    cout <<dp[x]<< endl;
}
#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    int n , x;
    cin >> n >> x;
    // Your code here
    vi a(n);
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    long long sum = 0;
    int l = 0; 
    int r = 0;
    int ans = 0;
    for(int i=0;i<n;i++){
        sum+=a[i];
        r++;
        if(sum==x){
            ans++;
        }
        while(sum>x){
            sum-=a[l];
            l++;
            if(sum==x){
                ans++;
            }
        }
    }
    cout<< ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
}
#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    int n;
    cin >> n;
    // Your code here
    vector<long long> a(n);
    for (int i = 2; i *i<= n; i++)
    {
        if(n%i==0){
            a.push_back(i);
            if(i!=n/i){
                a.push_back(n/i);
            }
        }
    }
    int l = a.size();
    long long ans = 0;
    vector<int> done(l,0);
    for(int i=0;i<l;i++){
        
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}
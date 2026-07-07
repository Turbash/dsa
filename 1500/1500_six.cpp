#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    int n;
    cin >> n;
    // Your code here
    string s;
    cin >> s;
    int q;
    cin>> q;
    int p = 0;
    int qo = 0;
    for(int i=0;i<n;i++){
        if(s[i] == '+') p++;
        else qo++;
    }
    for(int i=0;i<q;i++){
        long long a, b;
        cin >> a >> b;
        long long diff = min(a,b)*p - max(a,b)*qo;
        if(p==qo){
            cout<<"YES"<<endl;
            continue;
        }
        if(diff == 0){
            cout<<"YES"<<endl;
            continue;
        }
        long long base = abs(a-b);
        if(base == 0){
            cout<<"NO"<<endl;
            continue;
        }
        if(diff%base == 0){
            long long flips = abs(diff/base);
            if(diff > 0) {
                cout<<"NO"<<endl;
            }
            else {
                if(flips <= n) {
                    cout<<"YES"<<endl;
                }
                else {
                    cout<<"NO"<<endl;
                }
            }
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

   solve();
}
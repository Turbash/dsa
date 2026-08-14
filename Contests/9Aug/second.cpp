#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

long long mod = 998244353;

void solve() {
    long long n;
    cin >> n;
    string s;
    cin>>s;
    long long ans = 0;
    if((s[0] == '0' || s[0] == '?') && (s[1] == '0' || s[1] == '?')){
        int fine = 0;
        char next = '1';
        for(int i=2;i<n;i+=2){
            int j=i;
            while(j<n && j<i+2){
                if(s[j] != next && s[j] != '?'){
                    fine = 1;
                    break;
                }
                j++;
            }
            next = (next == '1') ? '0' : '1';
        }
        if(fine == 0){
            ans++;
        }
    }
    if((s[0] == '1' || s[0] == '?') && (s[1] == '1' || s[1] == '?')){
        int fine = 0;
        char next = '0';
        for(int i=2;i<n;i+=2){
            int j=i;
            while(j<n && j<i+2){
                if(s[j] != next && s[j] != '?'){
                    fine = 1;
                    break;
                }
                j++;
            }
            next = (next == '1') ? '0' : '1';
        }
        if(fine == 0){
            ans++;
        }
    }
    if((s[0] == '1' || s[0] == '?') && (s[1] == '0' || s[1] == '?')){
        int fine = 0;
        char next = '0';
        for(int i=1;i<n;i+=2){
            int j=i;
            while(j<n && j<i+2){
                if(s[j] != next && s[j] != '?'){
                    fine = 1;
                    break;
                }
                j++;
            }
            next = (next == '1') ? '0' : '1';
        }
        if(fine == 0){
            ans++;
        }
    }
    if((s[0] == '0' || s[0] == '?') && (s[1] == '1' || s[1] == '?')){
        int fine = 0;
        char next = '1';
        for(int i=1;i<n;i+=2){
            int j=i;
            while(j<n && j<i+2){
                if(s[j] != next && s[j] != '?'){
                    fine = 1;
                    break;
                }
                j++;
            }
            next = (next == '1') ? '0' : '1';
        }
        if(fine == 0){
            ans++;
        }
    }
    cout<<ans<<endl;
    // Your code here
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}
#
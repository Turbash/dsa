#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    int n;
    cin >> n;
    // Your code here
    string s;
    cin >> s;
    vi post0(n+1,0);
    for(int i=n-1;i>=0;i--){
        post0[i] = post0[i+1];
        if(s[i] == '0') post0[i]++;
    }
    long long cnt = 0;
    for(int i=0;i<n;i++){
        if(s[i] == '1'){
            cnt += post0[i];
        }
    }
    if(cnt==0){
        cout<<"Bob"<<endl;
        return;
    }
    if(cnt%2==1){
        cout<<"Alice"<<endl;
        return;
    }
    int l = 0;
    int r = n-1;
    for(int i=0;i<n;i++){
        if(s[i] == '1'){
            l = i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(s[i] == '0'){
            r = i;
            break;
        }
    }
    char now = '1';
    int curr = 0;  
    for(int i=l;i<=r;i++){
        if(s[i] == now){
            curr++;
        }else{
            if(curr%2==1){
                cout<<"Alice"<<endl;
                return;
            }
            curr = 1;
            now = s[i];
        }
    }
    if(curr%2==1){
        cout<<"Alice"<<endl;
        return;
    }
    cout<<"Bob"<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}
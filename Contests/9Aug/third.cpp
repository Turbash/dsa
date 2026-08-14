#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin>>s;
    int x = 0;
    int y = 0;
    for(int i=0;i<2*n;i++){
        if(s[i]=='1'){
            if(i<2*n-1){
                if(s[i+1]=='0'){
                    if(i%2==0){
                        y++;
                    }
                    else{
                        x++;
                    }
                }
                else{
                    if(i%2==0){
                        x++;
                    }
                    else{
                        y++;
                    }
                }
            }else{
                if(s[0]=='0'){
                    if(i%2==0){
                        y++;
                    }
                    else{
                        x++;
                    }
                }
                else{
                    if(i%2==0){
                        x++;
                    }
                    else{
                        y++;
                    }
                }
            }
        }
    }
    cout<<y<<" "<<x<<endl;
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
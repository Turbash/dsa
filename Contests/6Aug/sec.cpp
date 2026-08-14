#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    int n;
    cin >> n;
    // Your code here
    string s;
    cin>>s;
    int extra1 = 0;
    int extra0 = 0;
    int i = 0;
    while(i<n){
        char c = s[i];
        int j =i+1;
        while(j<n && s[j]==c) j++;
        if(c=='0'){
            extra0+=j-i-1;
        }else{
            extra1+=j-i-1;
        }
        i=j;
    }
    int firstblock = s[0]=='0'?0:1;
    int lastblock = s[n-1]=='0'?0:1;
    if(abs(extra0-extra1)>1){
        int diff = abs(extra0-extra1);
        if(extra0>extra1){
            if(diff>3){
                cout<<-1<<endl;
                return;
            }
            else if(diff==3){
                if(firstblock==1 && lastblock==1){
                    extra1+=2;
                }else{
                    cout<<-1<<endl;
                    return;
                }
            }
            else if(diff==2){
                if(firstblock==1 || lastblock==1){
                    extra1+=1;
                }else{
                    cout<<-1<<endl;
                    return;
                }
            }
        }else{
            if(diff>3){
                cout<<-1<<endl;
                return;
            }
            else if(diff==3){
                if(firstblock==0 && lastblock==0){
                    extra0+=2;
                }else{
                    cout<<-1<<endl;
                    return;
                }
            }
            else if(diff==2){
                if(firstblock==0 || lastblock==0){
                    extra0+=1;
                }else{
                    cout<<-1<<endl;
                    return;
                }
            }
        }
    }
    cout<<(extra0 + extra1)<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}
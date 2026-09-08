#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    int n;
    cin >> n;
    vi a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int curr = 0;
    int st = 0;
    vi post1(n,0);
    for(int i = n-2;i>=0;i--){
        if(a[i+1]==-1 || a[i+1] == 1){
            post1[i] = post1[i+1] + 1;
        }
        else{
            post1[i] = post1[i+1];
        }
    }
    for(int i=0;i<n;i++){
        if(a[i] == -1){
            if(!st){
                a[i] = 1;
                st =1;
            }else{
                if(post1[i]>0){
                    a[i]=0;
                }
                else{
                    a[i]=1;
                }
            }
        }else if(a[i] == 1){
            st = 1;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
   // Your code here
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}
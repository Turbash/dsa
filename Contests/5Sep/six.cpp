#pragma GCC optimize("O3")
#include<bits/stdc++.h>

using namespace std;
using vi = vector<long long>;

void solve() {
    long long n;
    cin>>n;
    vi a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    string s;
    cin>>s;
    long long forw = 0;
    long long back  = 0;
    long long invs = 0;
    long long ones = 0;
    stack<long long> te;
    stack<long long> tr;
    long long zeroes = 0;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            invs += ones;
            tr.push(ones);
        }else{
            ones++;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(a[i]==1){
            te.push(zeroes);
        }else{
            zeroes++;
        }
    }
    cout<<invs<<" ";
    for(int i=0;i<n;i++){
        if(invs==0){
            cout<<0<<" ";
            continue;
        }
        if(s[i]=='1'){
            if(te.empty()){
                cout<<invs<<" ";
            }
            else{
                long long tp = te.top();
                te.pop();
                invs-=tp - back;
                cout<<invs<<" ";
            }
            forw++;
        }else{
            if(tr.empty()){
                cout<<invs<<" ";
            }
            else{
                long long tp = tr.top();
                tr.pop();
                invs-=tp - forw;
                cout<<invs<<" ";
            }
            back++;
        }
    }
    cout<<endl;        
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}
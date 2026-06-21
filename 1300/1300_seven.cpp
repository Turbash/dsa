#include <bits/stdc++.h>

using namespace std;
int pre[1000001];
void solve()
{
    int n;
    cin >> n;
    if(pre[n]){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    cin.sync_with_stdio(false); // fast IO
    
    memset(pre, 0, sizeof(pre));
    for(int k=2;k*k<=1000000;k++){
        int at = k*k+k+1;
        if(at>1000000) break;
        int now = k*k;
        while(at<=1000000){
            pre[at]=1;
            now*=k;
            at+=now;
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
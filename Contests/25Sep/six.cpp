#include<bits/stdc++.h>

using namespace std;
using ll = long long;
using vi = vector<long long>;

void solve() {
    int n, q;
    cin>>n>>q;

    vi a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];

    vi ans(35);

    for(int step=0;step<35;step++){
        ll mn = *min_element(a.begin(),a.end());
        ll mx = *max_element(a.begin(),a.end());

        ans[step] = mx-mn;

        if(mn==mx){
            for(int i=step+1;i<35;i++)
                ans[i]=0;
            break;
        }

        vi b;

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                b.push_back(a[i]^a[j]);
            }
        }

        nth_element(b.begin(),b.begin()+n,b.end());
        b.resize(n);

        a=b;
    }

    while(q--){
        int x;
        cin>>x;

        if(x>=35)
            cout<<0<<endl;
        else
            cout<<ans[x]<<endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;

    while(t--)
        solve();
}
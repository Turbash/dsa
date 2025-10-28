#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        vector<int> b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[b[i]]++;
            mp[a[i]]++;
        }
        int ans=0;
        for(auto it:mp){
            ans=max(ans,it.second);
        }
        cout<<ans<<endl;
    }
    return 0;
}
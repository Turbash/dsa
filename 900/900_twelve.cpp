#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin>>a[i];
        }
        int ans=0;
        int l=a[0];
        int r=a[n-1];
        for(int i=0;i<n;i++){
            if(i!=0)
                ans=max(ans,a[i]-l);
            if(i!=n-1)
                ans=max(ans,r-a[i]);
            if(i!=n-1)
                ans=max(ans,a[i]-a[i+1]);
        }
        cout<<ans<<endl;
    }
}
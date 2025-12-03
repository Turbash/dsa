#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> a(n);
        for(int i = 0; i < n; i++) {
            cin>>a[i];
        }
        int ans=0;
        bool isInvalid=false;
        for(int i=n-1;i>0;i--){
            if(a[i]==0){
                isInvalid=true;
                cout<<-1<<endl;
                break;
            }
            while(a[i-1]>=a[i]){
                a[i-1]=a[i-1]/2;
                ans++;
            }
        }
        if(isInvalid)
            continue;
        cout<<ans<<endl;
    }
}
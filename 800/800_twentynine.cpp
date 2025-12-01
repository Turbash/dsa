#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int ans=0;
        for(int i=1;i<n;i++){
            if((a[i]%2)==(a[i-1]%2)){
                int consecutiveCount=2;
                while(i+1<n && (a[i+1]%2)==(a[i]%2)){
                    consecutiveCount++;
                    i++;
                }
                ans+=consecutiveCount-1;
            }
        }
        cout<<ans<<endl;
    }
}
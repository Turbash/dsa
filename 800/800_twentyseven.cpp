#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        vector<long long int> a(n);
        for(long long int i=0;i<n;i++){
            cin>>a[i];
        }
        long long int ans=-1;
        vector<long long int> pre2Count(n,0);
        pre2Count[0]=a[0]==2?1:0;
        for(long long int i=1;i<n;i++){
            pre2Count[i]=pre2Count[i-1]+(a[i]==2?1:0);
        }
        long long int total2Count=pre2Count[n-1];
        for(long long int i=0;i<n-1;i++){
            if(pre2Count[i]==total2Count - pre2Count[i]){
                ans=i+1;
                break;
            }
        }
        cout<<ans<<endl;
    }
}
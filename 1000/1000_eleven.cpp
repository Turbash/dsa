#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        pair<long long int,long long int>ans{0,0};
        for(long long int i=2;i<=sqrt(n);i++){
            if(n%i==0){
                long long int a=n/i;
                long long int b=n-a;
                ans={a,b};
                break;
            }
        }
        if(ans.first==0 && ans.second==0){
            ans={1,n-1};
        }
        cout<<ans.first<<" "<<ans.second<<endl;
    }
}
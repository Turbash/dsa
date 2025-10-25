#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long int ans=0;
        while(n>2){
            ans+=n/3;
            n-=2*(n/3);
        }
        cout<<ans<<endl;
    }
    return 0;
}
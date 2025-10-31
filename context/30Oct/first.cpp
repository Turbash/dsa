#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int r,x,d,n;
        cin>>r>>x>>d>>n;
        string s;
        cin>>s;
        bool isDiv2=r<x;
        if(isDiv2){
            cout<<n<<endl;
            continue;
        }
        int ans=0;
        for(int i=0;i<n;i++){
            isDiv2=r<x;
            if(!isDiv2){
                if(s[i]=='2'){
                    continue;
                }
                if(s[i]=='1'){
                    ans++;
                    r=max(0LL,r-d);
                    continue;
                }
            }
            else{
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
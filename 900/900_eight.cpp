#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans =0;
        int curr=1;
        for(int j=0;j<n-1;j++){
            if(s[j]==s[j+1])
                curr++;
            else{
                ans = max(ans,curr);
                curr=1;
            }
        }
        ans=max(ans,curr);
        cout<<ans+1<<endl;
    }
}
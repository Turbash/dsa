#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans=0;
        set<char> pre;
        set<char> post;
        vector<int> prefix(n,0);
        vector<int> suffix(n,0);
        for(int i=0;i<n;i++){
            pre.insert(s[i]);
            prefix[i]=pre.size();
        }
        for(int i=n-1;i>=0;i--){
            post.insert(s[i]);
            suffix[i]=post.size();
        }
        for(int i=0;i<n-1;i++){
            ans=max(ans,prefix[i]+suffix[i+1]);
        }
        cout<<ans<<endl;
    }
}
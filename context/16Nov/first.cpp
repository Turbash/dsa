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
        map<char,int> mp;
        for(auto c:s){
            mp[c]++;
        }
        int ans=n-mp[s[s.size()-1]];
        cout<<ans<<endl;
    }
}
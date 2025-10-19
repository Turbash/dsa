#include<iostream>
#include<map>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        map<char,int> mp;
        for(int j=0;j<n;j++){
            mp[s[j]]++;
        }
        int toRemove=0;
        for(auto it:mp){
            if(it.second%2){
                toRemove++;
            }
        }
        if(toRemove<=k+1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
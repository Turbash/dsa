#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int ans=0;
        int lastOneIdx=-1;
        for(int j=0;j<n;j++){
            if(s[j]=='1'){
                if(lastOneIdx==-1){
                    ans++;
                }
                else if(j-k+1>lastOneIdx){
                    ans++;
                }
                lastOneIdx=j;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
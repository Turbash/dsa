#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a,b;
        cin>>a>>b;
        map<char,int> ma;
        map<char,int> mb;
        for(int i=0;i<n;i++){
            ma[a[i]]++;
            mb[b[i]]++;
        }
        if(ma==mb){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
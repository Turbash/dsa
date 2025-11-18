#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        double a,b,n;
        cin>>a>>b>>n;
        double ans=1;
        double temp=a/n;
        if(temp>b){
            cout<<1<<endl;
            continue;
        }
        else if (temp==b){
            cout<<1<<endl;
            continue;
        }
        else{
            if(a==b){
                cout<<1<<endl;
                continue;
            }
            cout<<2<<endl;
            continue;
        }
    }
}
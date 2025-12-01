#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int xorall=0;
        for(int i=0;i<n;i++){
            xorall^=a[i];
        }
        if(n%2==0){
            if(xorall==0){
                cout<<0<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
        else{
            cout<<xorall<<endl;
        }
    }
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        bool onlyOdds=true;
        bool onlyEvens=true;
        for(int i=0;i<n;i++){
            if(a[i]%2==0){
                onlyOdds=false;
            }
            else{
                onlyEvens=false;
            }
        }
        if(!onlyEvens && !onlyOdds){
            sort(a.begin(),a.end());
            for(int i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        else{
            for(int i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
    }
    
}
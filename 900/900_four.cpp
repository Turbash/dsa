#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a,b,n;
        cin>>a>>b>>n;
        vector<int> arr(n);
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        long long int ans=b;
        // cout<<"Initial ans: "<<ans<<endl;
        for(int j=0;j<n;j++){
            ans+=min(arr[j],a-1);
            // cout<<"ans: "<<ans<<endl;
        }
        cout<<ans<<endl;
    }
    return 0;
}
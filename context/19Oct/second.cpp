#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        int ans=0;
        int currMax=arr[0];
        for(int j=0;j<n;j++){
            if(arr[j]>currMax){
                currMax=arr[j];
            }
            if(j%2==1){
                if(j-1>=0 && arr[j-1]>=currMax){
                    ans+=arr[j-1]-currMax+1;
                    // cout<<"ans after "<<j<<" left is "<<ans<<endl;
                }
                if(j+1<n && arr[j+1]>=currMax){
                    ans+=arr[j+1]-currMax+1;
                    currMax=arr[j+1];
                    arr[j+1]=currMax-1;
                    // cout<<"ans after "<<j<<" right is "<<ans<<" current max is "<<currMax<<endl;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
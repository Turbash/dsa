#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long int n,k,x;
        cin>>n>>k>>x;
        long long int minSum = k*(k+1)/2;
        // cout<<minSum<<endl;
        long long int maxSum = (n*(n+1))/2 - ((n-k)*(n-k+1))/2;
        // cout<<maxSum<<endl;
        if(x>=minSum && x<=maxSum){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
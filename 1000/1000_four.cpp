#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> arr;
        long long ans=0;
        long long carry=INT_MAX;
        long long lowestMinimum=INT_MAX;
        long long lowestSecondMinimum=INT_MAX;
        for(int i=0;i<n;i++){
            int m;
            cin>>m;
            long long  minimum=LONG_LONG_MAX;
            long long secondMinimum=LONG_LONG_MAX;
            for(int j=0;j<m;j++){
                long long x;
                cin>>x;
                arr.push_back(x);
                if(x<minimum){
                    secondMinimum=minimum;
                    minimum=x;
                }
                else if(x<secondMinimum){
                    secondMinimum=x;
                }
            }
            ans+=secondMinimum;
            lowestMinimum=min(lowestMinimum,minimum);
            lowestSecondMinimum=min(lowestSecondMinimum,secondMinimum);
        }
        cout<<ans+lowestMinimum-lowestSecondMinimum<<endl;
    }
}
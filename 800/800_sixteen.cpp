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
        bool isNotSorted = false;
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                isNotSorted = true;
                break;
            }
        }
        if(isNotSorted){
            cout<<0<<endl;
            continue;
        }
        int minDiff = INT_MAX;
        for(int i=0;i<n-1;i++){
            minDiff = min(minDiff, abs(a[i]-a[i+1]));
        }
        cout<<minDiff/2+1<<endl;
    }
}
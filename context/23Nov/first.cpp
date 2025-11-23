#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        map<int,int> freq;
        for(int i=0;i<n;i++){
            freq[arr[i]]++;
        }
        int ans=0;
        for(auto it: freq){
            if(it.first != it.second){
                if(it.second > it.first){
                    ans += (it.second - it.first);
                } else {
                    ans += it.second;
                }
            }
        }
        cout<<ans<<endl;
    }
}
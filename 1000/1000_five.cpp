#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,k;
        cin>>n>>k;
        vector<long long int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        vector<pair<long long int,long long int>> vp;
        for(int i=0;i<n;i++){
            long long int turns=arr[i]%k;
            if(turns==0){
                turns=k;
            }
            vp.push_back({turns, i});
        }
        vector<int> ans;
        sort(vp.begin(),vp.end(), [](pair<long long int,long long int> a, pair<long long int,long long int> b){
            if(a.first==b.first){
                return a.second<b.second;
            }
            return a.first>b.first;
        });
        for(int i=0;i<n;i++){
            cout<<vp[i].second+1<<" ";
        }
        cout<<endl;
    }
}
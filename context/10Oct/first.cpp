#include<iostream>
#include<vector>
#include<climits>
#include<map>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        vector<int> arr(num);
        for(int j=0;j<num;j++){
            cin>>arr[j];
        }
        int ans=num;
        map<int,int> mp;
        for(int j=0;j<num;j++){
            mp[arr[j]]++;
        }
        for (auto it:mp){
            if(it.second>1){
                ans-=it.second-1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
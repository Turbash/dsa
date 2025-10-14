#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        vector<int> arr(num);
        int sum=0;
        for(int j=0;j<num;j++){
            cin>>arr[j];
            sum+=arr[j];
        }
        int duplicatePairs=0;
        vector<pair<int,int>> duplicateIndices;
        for(int j=0;j<num;j++){
            for(int k=j+1;k<num;k++){
                if(arr[j]==arr[k]){
                    if(find(duplicateIndices.begin(),duplicateIndices.end(),make_pair(j,k))==duplicateIndices.end() && find(duplicateIndices.begin(),duplicateIndices.end(),make_pair(k,j))==duplicateIndices.end()){
                    duplicatePairs++;
                    duplicateIndices.push_back({j,k});
                    }
                }
            }
        }
        if(duplicatePairs*2>=(num+1)/2){
            cout<<sum<<endl;
        }
        else{
            cout<<0<<endl;

        }
    }
    return 0;
}   
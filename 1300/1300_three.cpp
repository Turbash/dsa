#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int l;
        cin>>l;
        int found=0;
        vector<long long int> arr(l);
        for(int j=0;j<l;j++){
            cin>>arr[j];
        }
        map<long long int,long long int> mp;
        long long int oddPreSum=0;
        long long int evenPreSum=0;

        for(int j=0;j<l;j++){
            if(j%2==0){
                evenPreSum+=arr[j];
            }
            else{
                oddPreSum+=arr[j];
            }
            if(evenPreSum-oddPreSum==0){
                cout<<"YES"<<endl;
                found=1;
                break;
            }
            if(mp.find(evenPreSum-oddPreSum)!=mp.end()){
                cout<<"YES"<<endl;
                found=1;
                break;
            }
            mp[evenPreSum-oddPreSum]++;

        }
        if(found==0){
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
          
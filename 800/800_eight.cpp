#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int num,k;
        cin>>num>>k;
        vector<int> arr(num);
        for(int j=0;j<num;j++){
            cin>>arr[j];
        }
        int found=0;
        for(int j=0;j<num;j++){
            if(arr[j]==k){
                found=1;
                break;
            }
        }
        if(found){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
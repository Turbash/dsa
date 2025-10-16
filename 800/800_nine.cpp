#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        int sum=0;
        vector<int> arr(num-1);
        for(int j=0;j<num-1;j++){
            cin>>arr[j];
            sum+=arr[j];
        }
        cout<<sum*-1<<endl;
    }
    return 0;
}
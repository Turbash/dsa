#include <iostream>
#include <vector>
using namespace std;

bool isSorted(vector<int> arr){
    for(int i=0; i<arr.size()-1; i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
}

int main(){
    int l;
    cin>>l;

    for(int i=0; i<l; i++){
        int n;
        cin>>n;
        int k;
        cin>>k;
        vector<int> arr;
        for(int j=0; j<n; j++){
            int x;
            cin>>x;
            arr.push_back(x);
        }
        if(isSorted(arr)){
            cout<<"YES"<<endl;
            continue;
        }
        if(k==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}
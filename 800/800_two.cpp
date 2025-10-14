#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        int target;
        cin>>target;
        vector<int> v(num);
        for(int j=0;j<num;j++){
            cin>>v[j];
        }
        int maxi=-1;
        for(int j=1;j<num;j++){
            int diff=v[j]-v[j-1];
            maxi=max(maxi,diff);
        }
        maxi=max(maxi,v[0]-0);
        maxi=max(maxi,2*(target-v[num-1]));
        cout<<maxi<<endl;
    }
    return 0;
}   
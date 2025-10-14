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
        vector<int> v(num);
        for(int j=0;j<num;j++){
            cin>>v[j];
        }
    }
}
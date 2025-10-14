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
        int min=0;
        for(int j=0;j<num;j++){
            cin>>arr[j];
        }
        sort(arr.begin(),arr.end());
        int j=0;
        while(j<num){
           if (arr[j]==min)
           {
               min++;
           }
           j++;
        }
        cout<<min<<endl;
    }
    return 0;
}
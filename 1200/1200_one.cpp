#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int days;
        cin>>days;
        vector<int> a;
        vector<int> b;
        vector<int> c;
        for(int j=0;j<days;j++){
            int ele;
            cin>>ele;
            a.push_back(ele);
        }
    for(int j=0;j<days;j++){
            int ele;
            cin>>ele;
            b.push_back(ele);
        }
        for(int j=0;j<days;j++){
            int ele;
            cin>>ele;
            c.push_back(ele);
        }
        sort(a.begin(),a.end(),greater<int>());
        sort(b.begin(),b.end(),greater<int>());
        sort(c.begin(),c.end(),greater<int>());
        int ans;
        cout<<"Ans: "<<ans<<endl;
    }
}
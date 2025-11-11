#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<long long int> a(n);
        vector<long long int> b(m);
        vector<long long int> c(m);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
        }
        for(int i=0;i<m;i++){
            cin>>c[i];
            a.push_back(c[i]);
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int cnt=0;
        for(int i=b.size()-1;i>=0;i--){
            if(b[i]>a[i])
                break;
            else{
                cnt++;
                a.pop_back();
            }
        }
        cout<<cnt<<endl;
    }
}
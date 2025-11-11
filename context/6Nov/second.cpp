#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        bool found=false;
        for(int i=0;i<n-1;i++){
            if(found) break;
            for(int j=i+1;j<n;j++){
                if((a[j]%a[i])%2==0){
                    cout<<a[i]<<" "<<a[j]<<endl;
                    found=true;
                    break;
                }
            }
        }
        if(!found){
            cout<<-1<<endl;
        }
    }
}
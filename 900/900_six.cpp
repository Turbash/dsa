#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long n;
        cin>>n;
        long long ans=1;
        while(n%ans==0){
            ans++;
        }
        cout<<ans-1<<endl;
    }
    return 0;
}
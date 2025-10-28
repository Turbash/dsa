#include<bits/stdc++.h>
using namespace std;

long long int gcd(long long int a,long long int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}

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
        int num=2;
        bool found=false;
        while(!found){
            for(int i=0;i<n;i++){
                long long int g=gcd(a[i],num);
                if(g==1){
                    found=true;
                    break;
                }
            }
            if(!found){
                num++;
            }
            if(found){
                break;
            }
        }
        cout<<num<<endl;
    }
}
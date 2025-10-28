#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        vector<long long int> a(n);
        vector<long long int> c(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>c[i];
        }
        long long int cost=0;
        long long int maxElement=LONG_MIN;
        long long int minElement=LONG_MAX;
        for(int i=0;i<n-1;i++){
            maxElement=max(maxElement,a[i]);
            minElement=min(minElement,a[i]);
            if(a[i+1]<a[i]){
                if(i+1==n-1){
                    if(i==0){
                        cost+=min(c[i],c[i+1]);
                    }
                    else{
                        cost+=c[i+1];
                    }
                }
                else if(i==0){
                    cost+=c[i];
                }
                else{
                    if(i+2<n && a[i+2]<a[i]){
                        cost+=c[i];
                    }
                    else{
                        cost+=c[i+1];
                    }
                }
            }
            cout<<cost<<" "<<a[i]<<" "<<a[i+1]<<" "<<endl;
        }
        cout<<cost<<endl;
    }
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        int evenCount=0;
        for(int j=0;j<n;j++){
            cin>>a[j];
            if(a[j]%2==0)
                evenCount++;
        }
        int minIncrease=INT_MAX;
        for(int j=0;j<n;j++){
            int rem=a[j]%k==0?0:k - (a[j]%k);
            minIncrease=min(minIncrease,rem);
        }
        if(k==4){
            if(evenCount>=2){
                cout<<0<<endl;
                continue;
            }
            else if(evenCount==1 && minIncrease>1){
                cout<<1<<endl;
                continue;
            }
            else if(evenCount==0 && minIncrease>2){
                cout<<2<<endl;
                continue;
            }
        }
        cout<<minIncrease<<endl;
    }
    return 0;
}
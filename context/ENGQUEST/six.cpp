#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        long long int negativeC=0;
        long long int positiveC=0;
        for(int i=0;i<n;i++){
            if(arr[i]>0){
                positiveC++;
            }
            else if(arr[i]<0){
                negativeC++;
            }
        }
        long long int subSequenceCount=0;
        long long int sum=0;
        for(int i=0;i<n;i++){
            sum+=abs(arr[i]);
        }
        if(negativeC==0){
            cout<<sum<<" "<<0<<endl;
            continue;
        }
        if(negativeC==1){
            cout<<sum<<" "<<1<<endl;
            continue;
        }
        if(positiveC==0){
            cout<<sum<<" "<<1<<endl;
            continue;
        }
        for(int i=1;i<n-1;i++){
            if(arr[i]>0){
                subSequenceCount++;
                while(i<n && arr[i]>0){
                    i++;
                }
            }
        }
        cout<<sum<<" "<<subSequenceCount+1<<endl;
    }
}
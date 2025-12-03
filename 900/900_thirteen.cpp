#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin>>a[i];
        }
        int nonZeroSubseq = 0;
        int nonZeroStart=0;
        for(int i = 0; i < n; i++) {
            if(a[i] != 0) {
                nonZeroStart=1;
            }
            else{
                if(nonZeroStart==1){
                    nonZeroSubseq++;
                    nonZeroStart=0;
                }
            }
        }
        if(nonZeroStart==1){
            nonZeroSubseq++;
        }
        if(nonZeroSubseq==0)
            cout<<0<<endl;
        else if(nonZeroSubseq==1)
            cout<<1<<endl;
        else
            cout<<2<<endl;


    }
}
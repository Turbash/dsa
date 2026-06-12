#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        vector<int> b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        vector<int> maxYet(n);
        vector<int> sumYet(n);
        maxYet[0] = b[0];
        sumYet[0] = a[0];
        for(int i=1;i<n;i++){
            maxYet[i] = max(maxYet[i-1], b[i]);
            sumYet[i] = sumYet[i-1] + a[i];
        }
        int ans = 0;
        for(int i=1;i<=min(n,k);i++){
            int curr = sumYet[i-1];
            int left = k-i;
            if(left>0){
                curr+=maxYet[i-1] * left;
            }
            ans = max(ans, curr);
        }
        cout<<ans<<endl;
    }
}
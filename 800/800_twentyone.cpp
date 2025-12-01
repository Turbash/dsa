#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int longestzero=0;
        int currentzero=0;
        for(int i=0;i<n;i++){
            if(a[i]==0){
                currentzero++;
            }
            else{
                longestzero=max(longestzero,currentzero);
                currentzero=0;
            }
        }
        longestzero=max(longestzero,currentzero);
        cout<<longestzero<<endl;
    }
}
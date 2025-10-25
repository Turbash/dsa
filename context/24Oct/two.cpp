#include<bits/stdc++.h>
using namespace std;

//tle
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,q;
        cin >> n >> q;
        string s;
        cin >> s;
        vector<long long int> a(q);
        int bCount=0;
        for(int i=0; i<q; i++){
            cin >> a[i];
        }
        for(int i=0;i<n;i++){
            if(s[i]=='B')
            bCount++;
        }
        for(int i=0;i<q;i++){
            if(bCount==0)
                cout<<a[i]<<endl;
            else{
                long long int cnt=0;
                int it=0;
                while(a[i]>0){
                    if(s[it%n]=='A'){
                        a[i]--;
                    }
                    else{
                        a[i]=a[i]/2;
                    }
                    cnt++;
                    it++;
                }
                cout << cnt << endl;
            }
        }
    }
    return 0;
}
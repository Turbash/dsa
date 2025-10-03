#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main() {
    int nt;
    cin >> nt;
    for (int i=0;i<nt;i++){
        int n,x,y;
        cin>>n>>x>>y;
        vector<int> a(n);
        map<int,vector<int>> mp;
        for(int j=0;j<n;j++){
            cin>>a[j];
            int remy=a[j]%y;
            mp[remy].push_back(a[j]);
        }
        long long int ans=0;
        for(auto &[k,v]:mp){
            map<int, long long int> mx;
            for(int l=0;l<v.size();l++){
                mx[v[l]%x]++;
            }
            for(auto &[k1,v1]:mx){
                if(k1==0 || (k1==x/2 && x%2==0)){
                    long long int cnt=v1;
                    ans+=(cnt*(cnt-1))/2;
                    mx[k1]=0;
                }
                else{
                    long long int cnt1=v1;
                    long long int cnt2=mx[x-k1];
                    ans+=cnt1*cnt2;
                    mx[x-k1]=0;
                }
            }

        }
        cout<<ans<<endl;
    }
    return 0;
}

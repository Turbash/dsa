#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        string s;
        cin>>s;
        vector<int> preACount(num,0);
        vector<int> preBCount(num,0);
        vector<int> sufACount(num,0);
        vector<int> sufBCount(num,0);
        for(int j=0;j<num;j++){
            if(s[j]=='A'){
                preACount[j]=1;
            }
            if(s[j]=='B'){
                preBCount[j]=1;
            }
            if(j>0){
                preACount[j]+=preACount[j-1];
                preBCount[j]+=preBCount[j-1];
            }
        }
        for(int j=num-1;j>=0;j--){
            if(s[j]=='A'){
                sufACount[j]=1;
            }
            if(s[j]=='B'){
                sufBCount[j]=1;
            }
            if(j<num-1){
                sufACount[j]+=sufACount[j+1];
                sufBCount[j]+=sufBCount[j+1];
            }
        }
        int ans=INT_MAX;
        for(int j=0;j<num;j++){
            for(int k=j+1;k<num;k++){
                if(preACount[j]+sufACount[k]==preBCount[j]+sufBCount[k]){
                    ans=min(ans,num-(k-j-1));
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
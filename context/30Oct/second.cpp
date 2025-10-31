#include<bits/stdc++.h>
using namespace std;

bool check(vector<int> &row,vector<int> &col){
    for(auto r:row){
        if(count(row.begin(),row.end(),r)>1){
            return true;
            cout<<count(row.begin(),row.end(),r)<<endl;
        }
    }
    for(auto c:col){
        if(count(col.begin(),col.end(),c)>1){
            return true;
        }
        cout<<count(col.begin(),col.end(),c)<<endl;
    }
    return false;
}

bool cantravel(vector<int> &row,vector<int> &col){
    sort(row.begin(),row.end());
    sort(col.begin(),col.end());
    for(int i=1;i<row.size();i++){
        if(abs(row[i]-row[i-1])>1){
            return false;
        }
    }
    for(int i=1;i<col.size();i++){
        if(abs(col[i]-col[i-1])>1){
            return false;
        }
    }
    return true;
}

bool threeconsecutiverowsorcols(vector<string> &a){
    int n=a.size();
    for(int i=0;i<n;i++){
        int countrow=0;
        int countcol=0;
        for(int j=0;j<n;j++){
            if(a[i][j]=='#'){
                countrow++;
                if(countrow>=3){
                    return true;
                }
            }
            else{
                countrow=0;
            }
            if(a[j][i]=='#'){
                countcol++;
                if(countcol>=3){
                    return true;
                }
            }
            else{
                countcol=0;
            }
        }
    }
    return false;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> a(n);
        vector<int> row;
        vector<int> col;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(a[i][j]=='#'){
                    row.push_back(i);
                    col.push_back(j);
                }
            }
        }
        if(threeconsecutiverowsorcols(a)){
            cout<<"NO"<<endl;
            continue;
        }
        if(cantravel(row,col)){
            cout<<"YES"<<endl;
            continue;
        }
        if(check(row,col)){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}
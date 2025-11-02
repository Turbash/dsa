#include<bits/stdc++.h>
using namespace std;

bool check(vector<string> &a){
    map<int,int> rowcount;
    map<int,int> colcount;
    for(int i=0;i<a.size();i++){
        for(int j=0;j<a[i].size();j++){
            if(a[i][j]=='#'){
                rowcount[i]++;
                colcount[j]++;
            }
        }
    }
    for(auto it:rowcount){
        if(it.second>=2){
            return true;
        }
    }
    for(auto it:colcount){
        if(it.second>=2){
            return true;
        }
    }
    return false;
}

bool cantravel(vector<string> &a){
    for(int i=0;i<a.size();i++){
        for(int j=0;j<a[i].size();j++){
            if(a[i][j]=='#'){
                bool left=false,right=false,up=false,down=false;
                if(i+1<a.size() && a[i+1][j]=='#'){
                    right=true;
                }
                if(j+1<a[i].size() && a[i][j+1]=='#'){
                    down=true;
                }
                if(i-1>=0 && a[i-1][j]=='#'){
                    left=true;
                }
                if(j-1>=0 && a[i][j-1]=='#'){
                    up=true;
                }
                if(!(left || right || up || down)){
                    return false;
                }
            }
        }
    }
    return true;
}

bool threeconsecutiverowsorcols(vector<string> &a){
    for(int i=0;i<a.size();i++){
        int count=0;
        for(int j=0;j<a[i].size();j++){
            if(a[i][j]=='#'){
                count++;
                if(count==3){
                    return true;
                }
            }
            else{
                count=0;
            }
        }
    }
    for(int j=0;j<a[0].size();j++){
        int count=0;
        for(int i=0;i<a.size();i++){
            if(a[i][j]=='#'){
                count++;
                if(count==3){
                    return true;
                }
            }
            else{
                count=0;
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
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(a[i][j]=='#'){
                }
            }
        }
        if(threeconsecutiverowsorcols(a)){
            cout<<"NO"<<endl;
            continue;
        }
        if(cantravel(a)){
            cout<<"YES"<<endl;
            continue;
        }
        if(check(a)){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}
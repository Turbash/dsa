#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        map<int,int> m;
        vector<int> v(num);
        for(int j=0;j<num;j++){
            cin>>v[j];
            m[v[j]]++;
        }
        if(m.size()==1){
            cout<<"Yes"<<endl;
            continue;
        }
        if(m.size()!=2){
            cout<<"No"<<endl;
            continue;
        }
        vector<int> two;
        for(auto it:m){
            two.push_back(it.second);
        }
        if(num%2==0 && two[0]==two[1]){
            cout<<"Yes"<<endl;
        }
        else if(num%2==1 && (two[0]==two[1]+1 || two[1]==two[0]+1)){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}
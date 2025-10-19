#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int greatestCommonDivisor(int a, int b){
    if(b==0){
        return a;
    }
    return greatestCommonDivisor(b,a%b);
}

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<int> a(n);
        vector<int> b(n);
        set<int> s;
        int evenCount=0;
        for(int j=0;j<n;j++){
            cin>>a[j];
            s.insert(a[j]);
            if(a[j]%2==0){
                evenCount++;
            }
        }
        for(int j=0;j<n;j++){
            cin>>b[j];
        }
        bool found=false;
        if(evenCount==2){
            cout<<0<<endl;
            continue;
        }
        for(int j=0;j<s.size();j++){
            if(found){
                break;
            }
            for(int k=j+1;k<s.size();k++){
                if(greatestCommonDivisor(*next(s.begin(), j), *next(s.begin(), k))>1){
                    found=true;
                    break;
                }
            }
        }
        if(found){
            cout<<0<<endl;
            continue;
        }
        bool found2=false;
        for(int j=0;j<s.size();j++){
            if(found2){
                break;
            }
            for(int k=j+1;k<s.size();k++){
                if(greatestCommonDivisor(*next(s.begin(), j)+1,*next(s.begin(), k))>1 || greatestCommonDivisor(*next(s.begin(), k)+1,*next(s.begin(), j))>1){
                    found2=true;
                    break;
                }
            }
        }
        if(found2){
            cout<<1<<endl;
            continue;
        }
        if(evenCount==1){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }
    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        if(num%3==0)
            cout<<0<<endl;
        else
            cout<<3-num%3<<endl;
    }
    return 0;
}
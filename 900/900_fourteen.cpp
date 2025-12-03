#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n%2==1 || n<4)
            cout<<-1<<endl;
        else{
            long long min;
            long long max;
            if(n%6==0)
                min=n/6;
            else
                min=n/6+1;
            max=n/4;
            cout<<min<<" "<<max<<endl;
        }
    }
}
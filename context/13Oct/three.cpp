#include<iostream>
#include<math.h>
using namespace std;

int findRev(int num)
{
    int x = log2(num) + 1;

    for (int i = 0; i < x; i++) 
       num = (num ^ (1 << i)); 

    return num;
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        int found = 0;
        for(int j=0;j<num;j++){
            int a = findRev(j);
            if(j^a==num)
                found = 1;
        }
        if(found)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
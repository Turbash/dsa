#include<iostream>
#include<climits>
using namespace std;
int main(){

        int num;
        cin>>num;
        int min=INT_MAX;
        for(int j=0;j<num;j++){
            int ele;
            cin>>ele;
            if(abs(ele)<min){
                min=abs(ele);
            }
        }
        cout<<min<<endl;
}
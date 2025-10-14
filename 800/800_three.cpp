#include<iostream> 
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        vector<char> v(num);
        for(int j=0;j<num;j++){
            cin>>v[j];
        }
        int curr=0;
        int ans=0;
        int isthree=0;
        for(int j=0;j<num;j++){
            if(v[j]=='.'){
                curr++;
            }
            else{
                if(curr>0){
                    if(curr<3){
                        ans+=curr;
                    }
                    else{
                        isthree=1;
                        break;
                    }
                }
                curr=0;
            }

        }
        if(curr>0){
                    if(curr<3){
                        ans+=curr;
                    }
                    else{
                        isthree=1;
                    }
                }
        if(isthree==1){
            cout<<2<<endl;
            continue;
        }
        cout<<ans<<endl;
    }
    return 0;
}
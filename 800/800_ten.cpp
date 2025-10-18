#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        vector<string> arr(10);
        for(int j=0;j<10;j++){
            cin>>arr[j];
        }
        int ans=0;
        for(int layer=0;layer<5;layer++){
            for(int col=layer;col<10-layer;col++){
                if(arr[layer][col]=='X'){
                    ans+=layer+1;
                }
            }
            for(int row=layer+1;row<10-layer;row++){
                if(arr[row][10-layer-1]=='X'){
                    ans+=layer+1;
                }
            }
            for(int col=10-layer-2;col>=layer;col--){
                if(arr[10-layer-1][col]=='X'){
                    ans+=layer+1;
                }
            }
            for(int row=10-layer-2;row>layer;row--){
                if(arr[row][layer]=='X'){
                    ans+=layer+1;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
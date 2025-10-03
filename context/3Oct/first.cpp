#include <iostream>
#include <vector>
#include <climits>
using namespace std;
 
bool iSAllZero(vector<int> &a) {
    for(int i=0;i<a.size();i++){
        if(a[i]!=0){
            return false;
        }
    }
    return true;
}
 
void subtractx(int a, vector<int> &b) {
    for(int i=0;i<b.size();i++){
        b[i]=a-b[i];
    }
}
 
void populateMin(int min, vector<int> &a) {
    for(int i=0;i<a.size();i++){
        if(a[i]==0){
            a[i]=min;
        }
    }
}
 
bool isAnyZero(vector<int> &a) {
    for(int i=0;i<a.size();i++){
        if(a[i]==0){
            return true;
        }
    }
    return false;
}
 
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int l;
        cin >> l;
        vector<int> a(l);
        int ans=0;
        for (int j = 0; j < l; j++) {
            cin >> a[j];
        }
        while(!iSAllZero(a)){
            int minval=INT_MAX;
            for(int j=0;j<l;j++){
                if(a[j]<minval && a[j]!=0){
                    minval=a[j];
                }
            }
            if(isAnyZero(a)){
                populateMin(minval,a);
                ans++;
            }
            subtractx(minval,a);
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
 
}
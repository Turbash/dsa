#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;
vector<long long> tillSum;
void solve() {
    long long x, y;
    cin >> x >> y;
    // Your code here
    long long tot = x + y;
    long long len = 0;
    long long till = 0;
    for(int i=0;i<tillSum.size();i++){
        if(tillSum[i]<=tot){
            len = i;
            till = tillSum[i];
        }
    }
    long long midx = (till+x-y)/2;
    if((till+x-y)%2!=0){
        midx++;
    }
    long long midy = (till-x+y)/2;
    if((till-x+y)%2!=0){
        midy++;
    }
    if(midx<0){
        midx=0;
        midy = till;
    }
    if(midy<0){
        midy=0;
        midx = till;
    }
    // cout<<len<<" "<<midx<<" "<<midy<<endl;
    long long a = 0;
    long long b = 0;
    char now = 'X';
    if(midy>midx){
        now = 'Y';
    }
    if(now=='X'){
        a++;
        midx-=a;
    }
    else{
        b++;
        midy-=b;
    }
    string ans;
    ans.push_back(now);
    for(int i=1;i<len;i++){
        if(now == 'X'){
            long long nextrate = (a+1) * (len-i);
            if(nextrate<=midx){
                a++;
            }
            else{
                b++;
                now = 'Y';
            }
        }else{
            long long nextrate = (b+1) * (len-i);
            if(nextrate<=midy){
                b++;
            }
            else{
                a++;
                now = 'X';
            }
        }
        midx-=a;
        midy-=b;
        ans.push_back(now);
    }
    cout<<ans<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    tillSum.push_back(0);
    for(long long i=1;i<200001;i++){
        long long now = i * (i + 1)/ 2;
        tillSum.push_back(now);
    }

    int t;
    cin >> t;
    while (t--) solve();
}
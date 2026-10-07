#include<bits/stdc++.h>

using namespace std;
using ll = long long;
using vi = vector<long long>;

void solve() {
    long long n;
    cin>>n;
    string s;
    cin>>s;
    stack<int> st;
    vi ans;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            st.push(i+1);
        }
        else if(s[i]=='2')
        {
            if(!st.empty()){
                st.pop();
                ans.push_back(i+1);
            }
        }
    }
    int sz = st.size() + ans.size();
    cout<<sz<<endl;
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    sort(ans.begin(),ans.end());
    for(int i=0;i<sz;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}
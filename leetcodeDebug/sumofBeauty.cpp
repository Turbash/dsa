#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int beauty(string s){
        map<int,int> m;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        int maxFreq=m[s[0]];
        int minFreq=m[s[0]];
        for(auto it:m){
            if(it.second>maxFreq)
                maxFreq=it.second;
            if(it.second<minFreq)
                minFreq=it.second;
        }
        return maxFreq-minFreq;
    }
    int beautySum(string s) {
        int ans=0;
        for(int i=0;i<s.size();i++){
            for(int j=2;j<=s.size();j++){
                string sub=s.substr(i,j);
                ans+=beauty(sub);
                cout<<sub<<" "<<beauty(sub)<<endl;
            }
        }
        return ans;
    }
};

int main(){
    Solution sol;
    string s;
    getline(cin, s);
    cout << sol.beautySum(s) << endl;
    return 0;
}
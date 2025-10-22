#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalin(string sub){
        string subCopy;
        for(int i=sub.size()-1;i>=0;i--){
            subCopy+=sub[i];
        }
        return sub==subCopy;
    }
    string longestPalindrome(string s) {
        int maxSub=0;
        string ans;
        for(int i=0;i<s.size();i++){
            for(int j=1;j<=s.size()-i;j++){
                string sub=s.substr(i,j);
                cout<<sub<<endl;
                if(isPalin(sub) && sub.size()>maxSub){
                    maxSub=sub.size();
                    ans=sub;
                }
            }
        }
        return ans;
    }
};

int main(){
    Solution sol;
    string s;
    getline(cin, s);
    cout << sol.longestPalindrome(s) << endl;
    return 0;
}
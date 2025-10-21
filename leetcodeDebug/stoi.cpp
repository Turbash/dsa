#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        long long int ans = 0;
        while (i < s.size() && s[i] == ' ')
            i++;
        int sign = 1;
        if (i >= s.size())
            return 0;
        if (i < s.size() && s[i] == '-') {
            sign = -1;
            i++;
        }
        else if(i<s.size() && s[i]=='+'){
            i++;
        }
        while(i<s.size()){
            if(s[i]=='0'){
                i++;
            }
            else{
                break;
            }
        }
        while (i < s.size()) {
            if(!isdigit(s[i])){
                return ans*sign;
            }
            ans = 10 * ans + int(s[i] - '0');
            i++;
            cout<<ans<<endl;
            if (ans > INT_MAX) {
                if(sign==1)     
                    return INT_MAX;
                else
                    return INT_MIN;
            }
        }
        return ans * sign;
    }
};

int main() {
    Solution sol;
    string s;
    getline(cin, s);
    cout << sol.myAtoi(s) << endl;
    return 0;
}
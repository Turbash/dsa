class Solution {
public:
    int longestStrChain(vector<string>& words) {
        unordered_map<string, unordered_set<string>> m;
        for (int i = 0; i < words.size(); i++) {
            for (int j = 0; j < words.size(); j++) {
                if (words[i].size() + 1 == words[j].size()) {
                    int next = 1;
                    for (int k = 0; k < words[i].size(); k++) {
                        if (words[i][k] != words[j][k] &&
                            words[i][k] != words[j][k + 1]) {
                            next = 0;
                            break;
                        }
                    }
                    if (next)
                        m[words[i]].insert(words[j]);
                }
            }
        }
        int n = words.size();
        vector<int> dp(n, 1);
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if (m[words[j]].count(words[j]) == 1 && dp[j] + 1 > dp[i]) {
                    dp[i] = dp[j] + 1;
                }
            }
        }
        int ans = INT_MIN;
        for (int i = 0; i < n; i++) {
            ans = max(ans, dp[i]);
        }
        return ans;
    }
};
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        if (nums[0] < nums[n - 1])
            return nums[0];
        int l = 0;
        int r = n - 1;
        int ans = INT_MAX;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (nums[mid] < nums[r]) {
                ans = min(ans, nums[mid]);
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cout << sol.findMin(nums) << endl;
    return 0;
}
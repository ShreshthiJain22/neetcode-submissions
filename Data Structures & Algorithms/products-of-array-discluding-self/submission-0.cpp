class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();

        vector<int> l(n + 1, 1);
        vector<int> r(n + 1, 1);

        for (int i = 0; i < n; i++) {
            l[i + 1] = l[i] * nums[i];
        }

        for (int i = n - 1; i >= 0; i--) {
            r[i] = r[i + 1] * nums[i];
        }

        vector<int> ans;

        for (int i = 0; i < n; i++) {
            ans.push_back(l[i] * r[i + 1]);
        }

        return ans;
    }
};
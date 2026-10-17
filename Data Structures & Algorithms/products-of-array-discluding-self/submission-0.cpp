class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();

        vector<int> prefix1(n, 1);
        for (int i = 1; i < nums.size(); i++) {
            prefix1[i] = prefix1[i-1] * nums[i-1];
        }

        vector<int> suffix1(n, 1);
        for (int j = n - 2; j >= 0; j--) {
            suffix1[j] = suffix1[j+1] * nums[j+1];
        }

        vector<int> ans;
        for (int k = 0; k < nums.size(); k++) {
            int prod = prefix1[k] * suffix1[k];
            ans.push_back(prod);
        }

        return ans;
    }
};

class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                for (int k = j + 1; k < nums.size(); k++) {
                    if (i > 0 && nums[i] == nums[i - 1]) continue;
                    if (j > i + 1 && nums[j] == nums[j - 1]) continue;
                    if (nums[i] + nums[j] + nums[k] == 0) {
                        ans.push_back({nums[i], nums[j], nums[k]});
                    }
                }
            }
        }
        return ans;
    }
};

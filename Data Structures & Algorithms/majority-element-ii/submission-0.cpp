class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>freq;
        int n = nums.size(); int val = n/3;
        vector<int>ans;

        for(int i=0; i<nums.size(); i++){
            if(freq[nums[i]] == val + 1){
                continue;
            }else{
                freq[nums[i]]++;
            }
            if(freq[nums[i]] > val){
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};
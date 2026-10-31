class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        mp[0] = 1;
        int count = 0;
        int prefsum = 0;

        for(int i=0; i<nums.size(); i++){
            prefsum += nums[i];

            if(mp.count(prefsum - k)){
                count += mp[prefsum-k];
            }

            mp[prefsum]++;
        }
        return count;
    }
};
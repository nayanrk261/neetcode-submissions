class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>freq;
        int n = nums.size(); int count = n/2;

        for(int i=0; i<nums.size(); i++){
            freq[nums[i]]++;
            if(freq[nums[i]] > count){
                return nums[i];
            }
        }
    }
};
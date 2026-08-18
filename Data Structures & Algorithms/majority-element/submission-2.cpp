class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate;
        int count = 0;

        for(int i=0; i<nums.size(); i++){
            if(count == 0){
                candidate = nums[i];
                count++;
            }
            else if(nums[i] == candidate){
                count++;
            }
            else{
                count--;
            }
        }
        //if(count > nums.size()/2){
            return candidate;
        //}
    }
};
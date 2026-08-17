class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        for(int right = left+1; right<numbers.size(); right++){
            if(numbers[left] + numbers[right] == target){
                return{left+1, right+1};
            }
        }
        left++;
        return{};
    }
};

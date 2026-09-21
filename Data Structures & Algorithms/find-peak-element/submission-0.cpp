class Solution {
   public:
    int findPeakElement(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;
        int mid = 0;

        while (low < high) {
            mid = low + (high - low) / 2;

            if (nums[low] == nums[mid]) {
                low++;
                high--;
            }

            if (nums[low] <= nums[mid]) {
                low = mid;
            } else {
                high = mid - 1;
            }
        }
        return low;
    }
};
class Solution {
   public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>maxi;
        int left = 0;
        deque<int> dq;

        for (int right = 0; right < nums.size(); right++) {

            while (!dq.empty() && nums[dq.back()] < nums[right]) {
                dq.pop_back();
            }
            dq.push_back(right);

            if (right - left + 1 > k) {
                left++;                   
                if (dq.front() < left) {  
                    dq.pop_front();
                }
            }
            if(right >= k - 1){
                maxi.push_back(nums[dq.front()]);
            }
        }
        return maxi;
    }
};

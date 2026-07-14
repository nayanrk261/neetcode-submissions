class Solution {
public:
    int maxArea(vector<int>& heights) {
        int low = 0;
        int high = heights.size() - 1;
        int maxArea = INT_MIN;

        while(low < high){
            int area = (min(heights[low],heights[high]) * (high-low));
            if(area > maxArea){
                maxArea = area;
            }
            
            if(heights[low] < heights[high]){
                low++;
            }
            else{
                high--;
            }
        }
        return maxArea;
    }
};

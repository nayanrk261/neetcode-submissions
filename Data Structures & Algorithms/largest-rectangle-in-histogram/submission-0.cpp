class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int ans = INT_MIN;
        for(int i=0; i<heights.size(); i++){
            int mh = heights[i];
            for(int j=i; j<heights.size(); j++){
                mh = min(mh,heights[j]);
                int width = j-i+1;
                int area = width * mh;
                ans = max(ans,area);
            }
        }
        return ans;
    }
};

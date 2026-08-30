class Solution {
   public:
    int largestRectangleArea(vector<int>& heights) {
        int ans = 0;
        stack<int> s;
        vector<int> right(heights.size());

        for (int i = heights.size() - 1; i >= 0; i--) {
            while (s.size() > 0 && heights[s.top()] >= heights[i]) {
                s.pop();
            }
            right[i] = s.empty() ? heights.size() : s.top();
            s.push(i);
        }

        while (!s.empty()) {
            s.pop();
        }

        vector<int> left(heights.size());

        for (int i = 0; i < heights.size(); i++) {
            while (s.size() > 0 && heights[s.top()] >= heights[i]) {
                s.pop();
            }
            left[i] = s.empty() ? -1 : s.top();
            s.push(i);
        }

        for (int i = 0; i < heights.size(); i++) {
            int height = heights[i];
            int width = right[i] - left[i] - 1;
            int currArea = height * width;
            ans = max(ans, currArea);
        }
        return ans;
    }
};

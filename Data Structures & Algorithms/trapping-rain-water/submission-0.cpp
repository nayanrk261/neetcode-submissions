class Solution {
public:
    int trap(vector<int>& height) {
        int low = 0; int high = height.size()-1;
        int lmax = 0; int rmax = 0;
        int ans = 0;

        while(low < high){
            lmax = max(lmax,height[low]);
            rmax = max(rmax,height[high]);
            
            if(lmax <= rmax){
                ans += (lmax - height[low]);
                low++;
            }
            else{
                ans += (rmax - height[high]);
                high--;
            }
        }
        return ans;
    }
};

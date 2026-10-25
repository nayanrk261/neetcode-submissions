class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for(int i=0; i<nums2.size(); i++){
            nums1.push_back(nums2[i]);
        }

        sort(nums1.begin(),nums1.end());

        double low = 0;
        double high = nums1.size() - 1;
        double mid = 0;

        while(low <= high){
            mid = low + (high-low)/2;

            if(nums1.size() % 2 == 0){
                double next = nums1[mid + 1];
                double m = nums1[mid];
                double ans = (next + m)/2;
                return ans;
            }
            else{
                return nums1[mid];
            }
        }
    }
};

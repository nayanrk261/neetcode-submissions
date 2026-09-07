class Solution {
   public:
    int shipWithinDays(vector<int>& weights, int days) {
        int sum = 0;
        int ans = 0;
        int maxi = INT_MIN;
        for (int i = 0; i < weights.size(); i++) {
            sum += weights[i];
        }

        for (int i = 0; i < weights.size(); i++) {
            int num1 = weights[i];
            maxi = max(num1, maxi);
        }

        int low = maxi;
        int high = sum;
        int mid = 0;

        while (low <= high) {
            mid = low + (high - low) / 2;
            int count = 1;
            int add = 0;
            int i = 0;
            while (i < weights.size()) {
                add += weights[i];
                if (add > mid) {
                    count++;
                    add = 0;
                } else {
                    i++;
                }
            }

            if (count <= days) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};
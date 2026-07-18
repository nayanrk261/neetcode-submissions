class Solution {
   public:
    int maxProfit(vector<int>& prices) {
        int today = prices[0];
        int maxpro = INT_MIN;
        int pro = 0;

        for (int i = 0; i < prices.size(); i++) {
            today = min(today, prices[i]);
            pro = prices[i] - today;
            maxpro = max(pro, maxpro);
        }
        return maxpro;
    }
};

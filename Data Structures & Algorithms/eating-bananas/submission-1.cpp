class Solution {
   public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(), piles.end());

        int max = piles[piles.size() - 1];
        int final = INT_MAX;

        for (int speed = max; speed > 0; speed--) {
            int eat = 0;

            for (int i = 0; i < piles.size(); i++) {
                eat += (piles[i] + speed - 1) / speed;
            }

            if (eat <= h) {
                final = speed;
            }
        }

        return final;
    }
};

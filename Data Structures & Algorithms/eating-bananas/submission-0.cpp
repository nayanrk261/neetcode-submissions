class Solution {
   public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int eat = 0;
        int count = 1;
        int add = 0;
        int i = 0;
        for (; i < piles.size(); i++) {
            add = (piles[i] + count - 1) / count;
            eat += add;
            if (eat > h) {
                count++;
                eat = 0;
                i = -1;
            }
        }

        return count;
    }
};

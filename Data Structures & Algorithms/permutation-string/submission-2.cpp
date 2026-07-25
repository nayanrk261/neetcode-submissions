class Solution {
   public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> freq;

        for (int i = 0; i < s1.size(); i++) {
            freq[s1[i]]++;
        }
        int windSize = s1.size();

        for (int j = 0; j < s2.size(); j++) {
            int winIdx = 0, Idx = j;
            unordered_map<char, int> freq2;

            while (winIdx < windSize && Idx < s2.size()) {
                freq2[s2[Idx]]++;
                winIdx++;
                Idx++;
            }

            if (freq == freq2) {
                return true;
            }
        }
        return false;
    }
};

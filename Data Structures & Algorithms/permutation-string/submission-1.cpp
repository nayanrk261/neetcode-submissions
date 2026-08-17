class Solution {
   public:
    bool checkInclusion(string s1, string s2) {
        string window;
        if (s2.size() < s1.size()) return false;
        for (int i = 0; i <= s2.size() - s1.size(); i++) {
            window = s2.substr(i,s1.size());
            if(window == s1){
                return true;
            }
        }
        return false;
    }
};

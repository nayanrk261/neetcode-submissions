class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>need;
        for(int a=0; a<t.size(); a++){
            need[t[a]]++;
        }
        int required = t.size();
        unordered_map<char,int>window;
        int formed = 0;
        int left = 0;
        int best_length = INT_MAX;
        int best_start = 0;

        for(int right=0; right<s.size(); right++){
            window[s[right]]++;
            if(window[s[right]] == need[s[right]]){
                formed++;
            }

            while(formed == required){
                if(right - left + 1 < best_length){
                    best_length = right - left + 1;
                    best_start = left;
                }

                window[s[left]]--;
                if(window[s[left]] < need[s[left]]){
                    formed--;
                }
                left++;
            }
        }
        return best_length == INT_MAX ? "" : s.substr(best_start, best_length);
    }
};

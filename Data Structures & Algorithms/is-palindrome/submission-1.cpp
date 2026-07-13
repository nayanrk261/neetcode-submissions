class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);

        int low  = 0;
        int high = s.size() - 1;

        while(low < high){
            if(!isalnum(s[low]) && s[low] != s[high]){
                low++;
            }
            else if(!isalnum(s[high]) && s[low] != s[high]){
                high--;
            }
            else if(s[low] != s[high]){
                return false;
            }
            else{
                low++;
                high--;
            }
        }
        return true;
    }
};

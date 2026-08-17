class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>s1;
        for(int i=0; i<s.size(); i++){
            s1[s[i]++];
        }

        unordered_map<char,int>t1;
        for(int j=0; j<t.size(); j++){
            t1[t[j]++];
        }

        if(s1 == t1){
            return true;
        }
        return false;
    }
};

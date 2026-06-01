class Solution {
public:

    string encode(vector<string>& strs) {
        string result = "";
        for(int i=0; i<strs.size(); i++){
            result += to_string(strs[i].size()) + "#" + strs[i];
        }
        return result;
    }

    vector<string> decode(string s) {
        vector<string>result;
        for(int i=0; i<s.size(); i++){
            int j = s.find("#", i);
            int length = stoi(s.substr(i,j-i));
            string subs = s.substr(j+1,length);
            result.push_back(subs);
            i = j + 1 + length - 1;
        }
        return result;
    }
};

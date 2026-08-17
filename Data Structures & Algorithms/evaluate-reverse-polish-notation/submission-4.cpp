class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        int result;

        for(int i=0; i<tokens.size(); i++){
            string t = tokens[i];

            if(isdigit(t[0])){
                st.push(stoi(t));
            }
            else{
                if(st.size() < 2){
                    return -1;
                }
                int x = st.top();
                st.pop();
                int y = st.top();
                st.pop();
                
                if(t[0] == '+'){
                    result = y + x;
                }
                else if(t[0] == '-'){
                    result = y-x;
                }
                else if(t[0] == '*'){
                    result = y * x;
                }
                else{
                    result = y/x;
                }
                st.push(result);
            }
        }
        if(st.empty()){
            return -1;
        }
        return st.top();
    }
};

class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        int sum = 0;

        for(int i=0; i<operations.size(); i++){
            string s = operations[i];

            if(isdigit(s[0]) || (s.size() > 1 && s[0] == '-' && isdigit(s[1]))){
                st.push(stoi(s));
            }
            else{
                if(s[0] == '+'){
                    int val = 0;
                    int x = st.top(); st.pop();
                    int y = st.top(); st.pop();
                    val = x + y;
                    st.push(y);
                    st.push(x);
                    st.push(val);
                }
                else if(s[0] == 'C'){
                    st.pop();
                }
                else{
                    int val2 = 0;
                    int z = st.top(); st.pop();
                    val2 = 2 * z;
                    st.push(z);
                    st.push(val2);
                }
            }
        }
        while(!st.empty()){
            sum += st.top();
            st.pop();
        }
        return sum;
    }
};
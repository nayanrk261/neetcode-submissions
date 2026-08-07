class Solution {
   public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> arr;

        for (int i = 0; i < position.size(); i++) {
            arr.push_back({position[i], speed[i]});
        }
        sort(arr.begin(), arr.end(), greater<pair<int,int>>());

        stack<double>st;

        for(int i=0; i<arr.size(); i++){
            double currtime = (target - arr[i].first) / (double)arr[i].second;
            if(!st.empty() && currtime <= st.top()){
                continue;
            }
            st.push(currtime);
        }
        int ans = st.size();
        return ans;
    }
};

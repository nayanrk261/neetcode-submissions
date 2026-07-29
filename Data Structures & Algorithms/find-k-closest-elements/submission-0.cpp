class Solution {
   public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int left = 0;
        int val = 0;
        vector<int> minsiz;
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> minHeap;

        for (int right = 0; right < arr.size(); right++) {
            val = abs(arr[right] - x);
            minHeap.push({val, arr[right]});
        }
        while (!minHeap.empty() && k--) {
            minsiz.push_back(minHeap.top().second);
            minHeap.pop();
        }
        sort(minsiz.begin(), minsiz.end()); 
        return minsiz;
    }
};
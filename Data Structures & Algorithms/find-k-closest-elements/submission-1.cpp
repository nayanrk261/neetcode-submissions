class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int>minsiz;
        int left = 0;
        int right = arr.size() - 1;
        
        while(right - left + 1 > k){
            if(abs(arr[left] - x) > abs(arr[right] - x)){
                left++;
            }
            else{
                right--;
            }
        }
        for(int i=left; i<=right; i++){
            minsiz.push_back(arr[i]);
        }
        return minsiz;
    }
};
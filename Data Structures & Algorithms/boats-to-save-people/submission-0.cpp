class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int count = 0, sum = 0;

        int low = 0;
        int high = people.size()-1;

        while(low < high){
            sum = people[low] + people[high];
            if(sum > limit){
                count++;
                high--;
            }
            else{
                count++;
                low++;
                high--;
            }
        }
        if(low == high) count++;
        return count;
    }
};
class Solution {
   public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int row = -1;
        for (int i = 0; i < matrix.size(); i++) {
            if (target <= matrix[i][n - 1] && target >= matrix[i][0]) {
                row = i;
                break;
            }
        }
        if (row == -1) return false;

        int low = 0;
        int high = n-1;
        int mid = 0;

        while (low <= high) {
            mid = low + (high-low)/2;
            if (matrix[row][mid] == target) {
                return true;
            } else if (matrix[row][mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return false;
    }
};

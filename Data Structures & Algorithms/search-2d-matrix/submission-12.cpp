class Solution {
   public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int left = 0, right = (matrix.size() * matrix[0].size()) - 1;
        while (left <= right) {
            int middle = (left + right) / 2, row = middle / matrix[0].size(),
                   col = middle % matrix[0].size();
            if (matrix[row][col] == target)
                return true;
            else if (matrix[row][col] > target)
                right = middle - 1;
            else
                left = middle + 1;
        }
        return false;
    }
};

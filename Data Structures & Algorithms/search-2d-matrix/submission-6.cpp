class Solution {
   public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for (vector<int> row : matrix) {
            if (row.back() >= target)
                if (binary_search(row.begin(), row.end(), target)) return true;
        }
        return false;
    }
};

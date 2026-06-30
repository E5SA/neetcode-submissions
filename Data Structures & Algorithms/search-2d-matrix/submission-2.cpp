class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        size_t row = 0;
        for (; row < matrix.size(); row++)
        {
            if (matrix[row].back() >= target)
                break;
        }
        if (row >= matrix.size()) return false;
        for (int i : matrix[row])
        {
            if (i == target)
                return true;
        }
        return false;
    }
};

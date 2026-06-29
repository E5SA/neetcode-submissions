class Solution {
   public:
    void rotate(vector<vector<int>>& matrix) {
        for (size_t i = 0; i < matrix.size(); ++i)
            for (size_t j = i + 1; j < matrix.size(); ++j) std::swap(matrix[i][j], matrix[j][i]);

        for (auto& row : matrix) std::reverse(row.begin(), row.end());
    }
};

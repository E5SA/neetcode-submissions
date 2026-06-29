class Solution {
   public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<size_t, size_t>> zero_pos;
        for (size_t row = 0; row < matrix.size(); ++row) {
            for (size_t col = 0; col < matrix[row].size(); ++col) {
                if (matrix[row][col] == 0) zero_pos.push_back({row, col});
            }
        }

        for (pair<size_t, size_t> coord : zero_pos) {
            fill(matrix[coord.first].begin(), matrix[coord.first].end(), 0);
            for (vector<int>& row : matrix) row[coord.second] = 0;
        }
    }
};

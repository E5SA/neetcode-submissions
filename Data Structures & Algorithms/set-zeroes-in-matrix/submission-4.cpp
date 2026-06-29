class Solution {
   public:
    void setZeroes(vector<vector<int>>& matrix) {
        size_t rows = matrix.size(), columns = matrix[0].size();
        vector<bool> row_zeros(rows, false), column_zeros(columns, false);

        for (size_t row = 0; row < matrix.size(); ++row) {
            for (size_t col = 0; col < matrix[row].size(); ++col) {
                if (matrix[row][col] == 0) {
                    row_zeros[row] = true;
                    column_zeros[col] = true;
                }
            }
        }
        for (size_t row = 0; row < matrix.size(); ++row) {
            if (row_zeros[row])
                fill(matrix[row].begin(), matrix[row].end(), 0);
            else {
                for (size_t col = 0; col < matrix[row].size(); ++col) {
                    if (column_zeros[col]) matrix[row][col] = 0;
                }
            }
        }
    }
};

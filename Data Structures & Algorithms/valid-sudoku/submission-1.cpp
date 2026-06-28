class Solution {
   public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> rows(9);
        vector<unordered_set<char>> columns(9);
        vector<unordered_set<char>> sub_boxes(9);

        for (size_t row = 0; row < board[0].size(); row++) {
            for (size_t col = 0; col < board.size(); col++) {
                char current = board[row][col];

                if (current == '.') continue;

                int sub_box = (row / 3) + 3 * (col / 3);
                if (rows[row].contains(current) || columns[col].contains(current) ||
                    sub_boxes[sub_box].contains(current))
                    return false;

                rows[row].insert(current);
                columns[col].insert(current);
                sub_boxes[sub_box].insert(current);
            }
        }
        return true;
    }
};

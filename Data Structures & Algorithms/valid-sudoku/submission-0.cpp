class Solution {
   public:
    bool checkDimension(vector<vector<char>>& dimension) {
        for (vector<char> component : dimension) {
            unordered_set<int> seen;
            for (char c : component) {
                if (c == '.') continue;
                if (!seen.insert(c).second) return false;
            }
        }
        return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {
        {
            if (!checkDimension(board))  // Test case : check all rows
                return false;
        }

        {
            vector<vector<char>> columns(
                board[0].size(), vector<char>(board.size()));  // Test case : check all columns
            for (size_t c = 0; c < board[0].size(); c++) {
                for (size_t r = 0; r < board.size(); r++) {
                    columns[c][r] = board[r][c];
                }
            }
            if (!checkDimension(columns)) return false;
        }

        {
            vector<vector<char>> sub_boxes;  // Test case : check all sub-boxes
            for (size_t i = 0; i < 3; i++) {
                vector<char> box1, box2, box3;
                for (size_t j = i * 3; j < i * 3 + 3; j++) {
                    box1.insert(box1.end(), board[j].begin(), board[j].begin() + 3);
                    box2.insert(box2.end(), board[j].begin() + 3, board[j].begin() + 6);
                    box3.insert(box3.end(), board[j].begin() + 6, board[j].begin() + 9);
                }
                sub_boxes.insert(sub_boxes.end(), {box1, box2, box3});
            }
            if (!checkDimension(sub_boxes)) return false;
        }

        return true;
    }
};

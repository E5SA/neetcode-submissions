class Solution {
   public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> sequence;
        int top = 0, left = 0;
        int bottom = matrix.size() - 1, right = matrix[0].size() - 1;

        while (top <= bottom && left <= right) {
            for (int i = left; i <= right && top <= bottom; i++) sequence.push_back(matrix[top][i]);
            top++;
            for (int i = top; i <= bottom && left <= right; i++)
                sequence.push_back(matrix[i][right]);
            right--;
            for (int i = right; i >= left && top <= bottom; i--)
                sequence.push_back(matrix[bottom][i]);
            bottom--;
            for (int i = bottom; i >= top && left <= right; i--)
                sequence.push_back(matrix[i][left]);
            left++;
        }

        return sequence;
    }
};

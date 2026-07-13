class Solution {
   public:
    int calPoints(vector<string>& operations) {
        vector<int> points;
        for (int i = 0; i < operations.size(); ++i) {
            try {
                points.push_back(stoi(operations[i]));
            } catch (...) {
                if (operations[i] == "+")
                    points.push_back(points[points.size() - 1] + points[points.size() - 2]);
                else if (operations[i] == "D")
                    points.push_back(points[points.size() - 1] * 2);
                else if (operations[i] == "C")
                    points.pop_back();
            }
        }
        return accumulate(points.begin(), points.end(), 0);
    }
};
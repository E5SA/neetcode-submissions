class Solution {
   public:
    int calPoints(vector<string>& operations) {
        vector<int> points;
        for (string operation : operations) {
            if (operation == "+")
                points.push_back(points[points.size() - 1] + points[points.size() - 2]);
            else if (operation == "D")
                points.push_back(points[points.size() - 1] * 2);
            else if (operation == "C")
                points.pop_back();
            else
                points.push_back(stoi(operation));
        }
        return accumulate(points.begin(), points.end(), 0);
    }
};
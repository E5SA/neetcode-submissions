class Solution {
   public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> result(temperatures.size());
        vector<pair<int, int>> stack;

        for (int i = 0; i < temperatures.size(); i++) {
            while (!stack.empty() && stack.back().first < temperatures[i]) {
                result[stack.back().second] = i - stack.back().second;
                stack.pop_back();
            }
            stack.push_back({temperatures[i], i});
        }

        return result;
    }
};

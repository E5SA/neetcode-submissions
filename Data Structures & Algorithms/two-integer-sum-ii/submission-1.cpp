class Solution {
   public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> seen;
        for (int i = 0; i < numbers.size(); ++i) {
            if (seen.contains(numbers[i])) continue;
            int complement = target - numbers[i];
            if (seen.contains(complement)) return {seen[complement] + 1, i + 1};
            seen[numbers[i]] = i;
        }
        return {};
    }
};

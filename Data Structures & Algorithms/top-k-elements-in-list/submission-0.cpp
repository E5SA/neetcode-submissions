class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> frequency_map;
        for (int& i : nums) {
            frequency_map[i]++;
        }
        vector<pair<int, int>> sorted_numbers(frequency_map.begin(), frequency_map.end());
        sort(sorted_numbers.begin(), sorted_numbers.end(),
             [](const auto& a, const auto& b) { return a.second > b.second; });

        vector<int> result;
        for (size_t i = 0; i < k; i++) {
            result.push_back(sorted_numbers[i].first);
        }
        return result;
    }
};

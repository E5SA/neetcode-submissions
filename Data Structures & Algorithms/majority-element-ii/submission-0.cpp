class Solution {
   public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_set<int> elements;
        unordered_map<int, int> freq_map;
        freq_map.reserve(nums.size());
        for (int num : nums) {
            freq_map[num]++;
            if (freq_map[num] > nums.size() / 3) elements.insert(num);
        }
        return vector<int>(elements.begin(), elements.end());
    }
};
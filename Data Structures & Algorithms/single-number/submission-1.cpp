class Solution {
   public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> freq;
        freq.reserve(nums.size());
        freq.max_load_factor(0.25);
        for (int num : nums) freq[num]++;
        for (const auto& [num, count] : freq) {
            if (count == 1) return num;
        }
    }
};

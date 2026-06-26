class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0) return 0;

        sort(nums.begin(), nums.end());
        auto last = unique(nums.begin(), nums.end());
        nums.erase(last, nums.end());

        size_t max_length = 1, current_length = 1;
        for (size_t i = 0; i < nums.size() - 1; i++) {
            if (nums[i] + 1 == nums[i + 1])
                current_length++;
            else
                current_length = 1;
            max_length = max(max_length, current_length);
        }
        return max_length;
    }
};

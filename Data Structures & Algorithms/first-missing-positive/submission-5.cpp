class Solution {
   public:
    int firstMissingPositive(vector<int>& nums) {
        vector<bool> seen(nums.size(), false);

        for (int num : nums) {
            if (num > 0 && num <= nums.size()) {
                seen[num - 1] = true;
            }
        }

        for (int i = 0; i < nums.size(); i++) {
            if (!seen[i]) {
                return i + 1;
            }
        }

        return nums.size() + 1;
    }
};